// Fill out your copyright notice in the Description page of Project Settings.

#include "Particle.h"


// Sets default values
AParticle::AParticle()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	position = FVector(0.0f, 0.0f, 0.0f);
	velocity = FVector(0.0f, 0.0f, 0.0f);
	acceleration = FVector(0.0f, 0.0f, 0.0f);
	density = 0.0f;
	pressure = 0.0f;

}

void AParticle::Update(const float& dt)
{
	prevPosition = position;
	velocity += acceleration * dt;
	position += velocity * dt * 100.0f;
}

// Called when the game starts or when spawned
void AParticle::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AParticle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
