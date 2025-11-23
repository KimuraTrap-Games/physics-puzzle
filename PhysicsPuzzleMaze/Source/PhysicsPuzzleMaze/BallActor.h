#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BallActor.generated.h"

UCLASS()
class PHYSICSPUZZLEMAZE_API ABallActor : public APawn
{
    GENERATED_BODY()

public:
    // Sets default values for this pawn's properties
    ABallActor();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Ball mesh
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* BallMesh;

    // Spring arm for the camera
    UPROPERTY(VisibleAnywhere)
    class USpringArmComponent* SpringArm;

    // Camera
    UPROPERTY(VisibleAnywhere)
    class UCameraComponent* Camera;
};
