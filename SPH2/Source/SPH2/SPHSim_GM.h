// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SPH2/Particle.h"
#include "SPHSim_GM.generated.h"

/**
*
*/
USTRUCT()
struct FNestedArray
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY()
	TArray<int> partList;

	FNestedArray()
	{

	}
};

UCLASS()
class SPH2_API ASPHSim_GM : public AGameModeBase
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ASPHSim_GM();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FVector> planes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<AParticle*> particles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float mass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float visc_coeff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float tension_coeff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Kp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float rest_density;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector gravity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector gridDimension;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector simOffset;

	UFUNCTION(BlueprintCallable)
		void CheckParticlePlanesCollision(AParticle *particle);

	UFUNCTION(BlueprintCallable)
		void ConstructGrid(int numParticles);

	UFUNCTION(BlueprintCallable)
		void ComputeDensities();

	UFUNCTION(BlueprintCallable)
		void ComputeForces();

	UFUNCTION(BlueprintCallable)
		void setH(float h);

	UFUNCTION(BlueprintCallable)
		void setGrid();

	UFUNCTION(BlueprintCallable)
		void popParticleFromGrid(int idx);

	float PlaneParticleDistance(FVector partPos, FVector n, float dconst);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:

	UPROPERTY()
		TArray<FNestedArray> grid;

	UPROPERTY()
		float cellSize;

	UPROPERTY()
		float h;

	UPROPERTY()
		float h2;

	UPROPERTY()
		float WPoly6C;

	UPROPERTY()
		float Lapl_WViscosityC;

	UPROPERTY()
		float Grad_WSpikeC;

	int particlePositionToGridIndex(FVector partPosition);

	void addParticleToGrid(FVector partPosition, int partIdx);

	float WPoly6(float r2);

	float Lapl_WViscosity(float r);

	float Grad_WSpike(float r);


};

