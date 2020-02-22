// Fill out your copyright notice in the Description page of Project Settings.

#include "SPHSim_GM.h"

// Sets default values
ASPHSim_GM::ASPHSim_GM()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	planes.Empty();
	//Floor plane
	planes.Push(FVector(0.0f, 0.0f, 0.0f));
	planes.Push(FVector(0.0f, 0.0f, 1.0f));

	//Back Plane
	planes.Add(FVector(200.0f, 0.0f, 0.0f));
	planes.Add(FVector(-1.0f, 0.0f, 0.0f));

	//Front Plane
	planes.Add(FVector(0.0f, 0.0f, 0.0f));
	planes.Add(FVector(1.0f, 0.0f, 0.0f));

	//RightPlane
	planes.Add(FVector(0.0f, 250.0f, 0.0f));
	planes.Add(FVector(0.0f, -1.0f, 0.0f));

	//LeftPlane
	planes.Add(FVector(0.0f, -250.0f, 0.0f));
	planes.Add(FVector(0.0f, 1.0f, 0.0f));

	//Init Grid
	grid.SetNum(8000, false);
}


void ASPHSim_GM::CheckParticlePlanesCollision(AParticle *particle)
{
	for (int32 idx = 0; idx < planes.Num(); idx += 2)
	{
		FVector planePos = planes[idx];
		FVector n = planes[idx + 1];
		float dconst = -1.0f * Dot3(planePos, n);

		float distCurr = PlaneParticleDistance(particle->position, n, dconst);
		float distPrev = PlaneParticleDistance(particle->prevPosition, n, dconst);

		float d = (0.01f + Dot3((planePos - particle->position) / 100.0f, n));

		//if (d < 0.0f) d = -d;

		if (distCurr * distPrev < 0.0f)
		{
			//particle->velocity = particle->velocity - 2.0 * Dot3(n, particle->velocity) * n;
			//particle->velocity -= 0.1f * n * particle->velocity;

			//particle->acceleration += 10000.0f * Dot3(n, particle->position - planePos) * n - 0.9f * Dot3(particle->velocity, n) * n;
			//particle->acceleration -= 0.1f * n * particle->acceleration;
			//particle->position = particle->prevPosition;

			//particle->acceleration += 10000.0f * n * distCurr;
			//particle->acceleration += -0.9f * Dot3(particle->velocity, n) * n;

		}

		if (d > 0.0f) {
			particle->acceleration += 500.0f * d * n - 0.9f * Dot3(particle->velocity, n) * n;
		}
	}

	return;
}

void ASPHSim_GM::ConstructGrid(int numParticles)
{
	for (int32 idx = 0; idx < particles.Num(); ++idx)
	{
		addParticleToGrid(particles[idx]->position, idx);
	}
}

//Computations
void ASPHSim_GM::ComputeDensities()
{
	for (auto p : particles)
	{
		//int gridIdx = particlePositionToGridIndex(p->position);
		int gridIdx = p->gridIdx;
		p->density = 0;

		for (int x = -1; x <= 1; ++x)
		{
			if (gridIdx + x < 0 || gridIdx + x > grid.Num()) continue;
			for (int y = -1; y <= 1; ++y)
			{
				if (gridIdx + gridDimension.X * y < 0 || gridIdx + gridDimension.X * y > grid.Num()) continue;
				for (int z = -1; z <= 1; ++z)
				{
					if (gridIdx + gridDimension.X * gridDimension.Y * z < 0 || gridIdx + gridDimension.X * gridDimension.Y * z > grid.Num()) continue;

					for (auto pIdx : grid[gridIdx + x + gridDimension.X * y + gridDimension.X * gridDimension.Y * z].partList)
					{
						AParticle* p2 = particles[pIdx];

						float r2 = ((p2->position - p->position) / 100.0f).SizeSquared();

						if (r2 > h2) continue;
						p->density += mass * WPoly6(r2);
					}
				}
			}
		}

		p->pressure = Kp * (p->density - rest_density);
	}
}

void ASPHSim_GM::ComputeForces()
{
	for (auto p : particles)
	{
		//int gridIdx = particlePositionToGridIndex(p->position);	
		int gridIdx = p->gridIdx;
		FVector tension = FVector(0.0f, 0.0f, 0.0f);
		FVector viscosity = FVector(0.0f, 0.0f, 0.0f);
		FVector pressure = FVector(0.0f, 0.0f, 0.0f);

		for (int x = -1; x <= 1; ++x)
		{
			if (gridIdx + x < 0 || gridIdx + x > grid.Num()) continue;
			for (int y = -1; y <= 1; ++y)
			{
				if (gridIdx + gridDimension.X * y < 0 || gridIdx + gridDimension.X * y > grid.Num()) continue;
				for (int z = -1; z <= 1; ++z)
				{
					if (gridIdx + gridDimension.X * gridDimension.Y * z < 0 || gridIdx + gridDimension.X * gridDimension.Y * z > grid.Num()) continue;

					for (auto pIdx : grid[gridIdx + x + gridDimension.X * y + gridDimension.X * gridDimension.Y * z].partList)
					{
						AParticle* p2 = particles[pIdx];

						if (p == p2) continue;

						FVector dist = (p2->position - p->position) / 100.0f;
						FVector u_diff = p2->velocity - p->velocity; 
						float r = dist.Size();
						float r2 = dist.SizeSquared();
						float average_p = (p->pressure + p2->pressure) / 2.0f;

						if (r2 > h2) continue;

						viscosity += u_diff * Lapl_WViscosity(r) / p2->density;
						pressure -= average_p * Grad_WSpike(r) * dist / p2->density;
						tension -= WPoly6(r2) * dist;
						
					}
				}
			}
		}

		viscosity *= mass * visc_coeff;
		pressure *= mass;
		tension *= tension_coeff * p->density;

		p->acceleration = (viscosity + pressure + tension) / p->density;
		p->acceleration += gravity;
	}
}

void ASPHSim_GM::setH(float h)
{
	ASPHSim_GM::h = h;
	h2 = h * h;
	cellSize = h;

	WPoly6C = 315.0f / (64.0f * PI * powf(h, 9));
	Lapl_WViscosityC = 45.0f / (PI * powf(h, 6));
	Grad_WSpikeC = -45.0f / (PI * powf(h, 6));
}

void ASPHSim_GM::setGrid()
{
	//Init Grid
	grid.Empty();
	grid.SetNum(gridDimension.X * gridDimension.Y * gridDimension.Z, false);
}

void ASPHSim_GM::popParticleFromGrid(int idx)
{
	//FVector partPosition = particles[idx]->position;

	//int gidx = particlePositionToGridIndex(partPosition);

	int gidx = particles[idx]->gridIdx;

	grid[gidx].partList.Pop(idx);

}

float ASPHSim_GM::PlaneParticleDistance(FVector partPos, FVector n, float dconst)
{
	return (Dot3(partPos, n) - dconst);
}

// Called every frame
void ASPHSim_GM::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int ASPHSim_GM::particlePositionToGridIndex(FVector partPosition)
{
	int discIdxX = int((partPosition.X + simOffset.X) / (cellSize * 100.0f));
	int discIdxY = int((partPosition.Y + simOffset.Y) / (cellSize * 100.0f));
	int discIdxZ = int((partPosition.Z + simOffset.Z) / (cellSize * 100.0f));

	int index = int(discIdxX + gridDimension.X * discIdxY + gridDimension.X * gridDimension.Y * discIdxZ);

	return index;
}

void ASPHSim_GM::addParticleToGrid(FVector partPosition, int partIdx)
{
	int idx = particlePositionToGridIndex(partPosition);

	grid[idx].partList.Push(partIdx);

	particles[partIdx]->gridIdx = idx;
}

//Kernels functions
float ASPHSim_GM::WPoly6(float r2)
{
	if(r2 > h2) return 0.0f;

	float d = h2 - r2;
	return WPoly6C * d * d * d;
}

float ASPHSim_GM::Lapl_WViscosity(float r)
{
	if (r > h) return 0.0f;

	float d = h - r;
	return Lapl_WViscosityC * d;
}

float ASPHSim_GM::Grad_WSpike(float r)
{
	float r2 = r * r;
	if (r2 > h2) return 0.0f;

	float d = h - r;
	return Grad_WSpikeC * d * d / r;
}
