#include "PlatformActor.h"

// Sets default values
APlatformActor::APlatformActor()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create platform mesh
    PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
    RootComponent = PlatformMesh;

    PlatformMesh->SetMobility(EComponentMobility::Movable);
    PlatformMesh->SetSimulatePhysics(false);
}

// Called when the game starts or when spawned
void APlatformActor::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void APlatformActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Update current pitch and roll based on input
    CurrentPitch += ForwardInput * TiltSpeed * DeltaTime;
    CurrentRoll += RightInput * TiltSpeed * DeltaTime;

    // Clamp pitch & roll
    CurrentPitch = FMath::Clamp(CurrentPitch, -MaxTiltAngle, MaxTiltAngle);
    CurrentRoll = FMath::Clamp(CurrentRoll, -MaxTiltAngle, MaxTiltAngle);

    // Apply rotation to platform
    FRotator NewRotation(CurrentPitch, 0.f, CurrentRoll);
    PlatformMesh->SetRelativeRotation(NewRotation);
}

void APlatformActor::SetTiltInput(float Forward, float Right)
{
    ForwardInput = Forward;
    RightInput = Right;
}
