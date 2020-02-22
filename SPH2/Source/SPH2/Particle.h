// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particle.generated.h"

UCLASS()
class SPH2_API AParticle : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AParticle();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector prevPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector velocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector acceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float density;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float pressure;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float gridIdx;


	UFUNCTION(BlueprintCallable)
		void Update(const float& dt);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
