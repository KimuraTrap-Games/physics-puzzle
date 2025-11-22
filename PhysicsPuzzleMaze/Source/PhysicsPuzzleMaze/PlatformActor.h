// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformActor.generated.h"

UCLASS()
class PHYSICSPUZZLEMAZE_API APlatformActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlatformActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Platform mesh
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* PlatfromMesh;

	// Tilt variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tilt")
	float ForwardInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tilt")
	float RightInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tilt")
	float TiltSpeed = 50.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tilt")
	float MaxTiltAngle = 15.f;

private:
	float CurrentPitch = 0.f;
	float CurrentRoll = 0.f;
};
