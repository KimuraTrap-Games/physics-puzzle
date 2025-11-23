#include "BallActor.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ABallActor::ABallActor()
{
    PrimaryActorTick.bCanEverTick = true;

    AutoPossessPlayer = EAutoReceiveInput::Player0;

    // Root Component
    USceneComponent* SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = SceneRoot;

    // Ball Mesh
    BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));
    BallMesh->SetupAttachment(RootComponent);
    BallMesh->SetSimulatePhysics(true);
    BallMesh->SetEnableGravity(true);
    BallMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

    // Spring Arm
    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArm->SetupAttachment(RootComponent);
    SpringArm->TargetArmLength = 1500.0f;             // Height above the ball
    SpringArm->SetRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f)); // Straight down
    SpringArm->bDoCollisionTest = false;             // Ignore collisions
    SpringArm->bEnableCameraLag = false;             // Optional: disable lag for top-down

    // Camera
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
