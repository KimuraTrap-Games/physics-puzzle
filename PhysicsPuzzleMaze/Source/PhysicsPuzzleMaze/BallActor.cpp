#include "BallActor.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/PlayerController.h"

// Sets default values
ABallActor::ABallActor()
{
    PrimaryActorTick.bCanEverTick = true;

    // Enable player control
    AutoPossessPlayer = EAutoReceiveInput::Player0;

    // Create ball mesh
    BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));
    RootComponent = BallMesh;
    BallMesh->SetSimulatePhysics(true);
    BallMesh->SetEnableGravity(true);
    BallMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

    // Create SpringArm
    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArm->SetupAttachment(RootComponent);
    SpringArm->TargetArmLength = 1200.0f;
    SpringArm->SetRelativeRotation(FRotator(-60.0f, 0.0f, 0.0f));
    SpringArm->bDoCollisionTest = false;

    // Enable camera lag for smooth follow
    SpringArm->bEnableCameraLag = true;
    SpringArm->CameraLagSpeed = 5.0f;
    SpringArm->bEnableCameraRotationLag = true;
    SpringArm->CameraRotationLagSpeed = 10.0f;

    // Create camera
    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
    Camera->bUsePawnControlRotation = false;
}

// Called when the game starts or when spawned
void ABallActor::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ABallActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
