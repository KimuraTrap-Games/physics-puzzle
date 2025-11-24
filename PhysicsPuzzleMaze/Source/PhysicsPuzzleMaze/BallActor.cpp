#include "BallActor.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ABallActor::ABallActor()
{
    PrimaryActorTick.bCanEverTick = true;

    AutoPossessPlayer = EAutoReceiveInput::Player0;

    // Ball Mesh becomes root
    BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));
    RootComponent = BallMesh;
    BallMesh->SetSimulatePhysics(true);
    BallMesh->SetEnableGravity(true);
    BallMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

    // Spring Arm attached to BallMesh root
    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArm->SetupAttachment(BallMesh);
    SpringArm->TargetArmLength = 2000.0f;
    SpringArm->SetRelativeRotation(FRotator(-60.0f, 0.0f, 0.0f));
    SpringArm->bDoCollisionTest = false;
    SpringArm->bEnableCameraLag = false;

    // Camera attached to spring arm
    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
    Camera->bUsePawnControlRotation = false;
}

// Called when the game starts or when spawned
void ABallActor::BeginPlay()
{
    Super::BeginPlay();
}

// Tick no longer needs to move spring arm
void ABallActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}