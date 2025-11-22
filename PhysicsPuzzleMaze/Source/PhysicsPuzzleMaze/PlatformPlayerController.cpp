#include "PlatformPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

APlatformPlayerController::APlatformPlayerController()
{
    bShowMouseCursor = false;
}

void APlatformPlayerController::BeginPlay()
{
    Super::BeginPlay();

    // Get Enhanced Input subsystem
    UEnhancedInputLocalPlayerSubsystem* Subsystem =
        ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

    if (Subsystem)
    {
        // Add your Mapping Context
        Subsystem->AddMappingContext(IMC_TiltControls, 0);
    }

    // Automatically find the PlatformActor
    for (TActorIterator<APlatformActor> It(GetWorld()); It; ++It)
    {
        PlatformRef = *It;
        break;
    }
}

void APlatformPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(InputComponent);

    Input->BindAction(IA_TiltForward, ETriggerEvent::Triggered, this, &APlatformPlayerController::HandleTiltForward);
    Input->BindAction(IA_TiltForward, ETriggerEvent::Completed, this, &APlatformPlayerController::HandleTiltForward);

    Input->BindAction(IA_TiltRight, ETriggerEvent::Triggered, this, &APlatformPlayerController::HandleTiltRight);
    Input->BindAction(IA_TiltRight, ETriggerEvent::Completed, this, &APlatformPlayerController::HandleTiltRight);
}

void APlatformPlayerController::HandleTiltForward(const FInputActionValue& Value)
{
    if (!PlatformRef) return;

    const float Input = Value.Get<float>();
    PlatformRef->SetTiltInput(Input, PlatformRef->RightInput);
}

void APlatformPlayerController::HandleTiltRight(const FInputActionValue& Value)
{
    if (!PlatformRef) return;

    const float Input = Value.Get<float>();
    PlatformRef->SetTiltInput(PlatformRef->ForwardInput, Input);
}
