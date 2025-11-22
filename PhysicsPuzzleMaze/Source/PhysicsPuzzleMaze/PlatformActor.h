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
    virtual void BeginPlay() override;

public:    
    virtual void Tick(float DeltaTime) override;

    // Platform mesh
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* PlatformMesh;

    // Tilt variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Tilt")
    float ForwardInput = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Tilt")
    float RightInput = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Tilt")
    float TiltSpeed = 50.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Tilt")
    float MaxTiltAngle = 15.f;

private:
    float CurrentPitch = 0.f;
    float CurrentRoll = 0.f;

public:
    UFUNCTION(BlueprintCallable)
    void SetTiltInput(float Forward, float Right);
};
