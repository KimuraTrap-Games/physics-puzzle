#include "PlatformPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EngineUtils.h"

void APlatformPlayerController::BeginPlay()
{
    Super::BeginPlay();

    // Enable Enhanced Input
    if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
        {
            // Add mapping context
            if (InputMappingContext)
            {
                Subsystem->AddMappingContext(InputMappingContext, 0);
            }
        }
    }

    // Find the platform in the level
    for (TActorIterator<APlatformActor> It(GetWorld()); It; ++It)
    {
        PlatformRef = *It;
        break;
    }

    if (!PlatformRef)
    {
        UE_LOG(LogTemp, Warning, TEXT("PlatformActor not found!"));
    }
}

void APlatformPlayerController::SetupInputComponent()
{
    Super::APlayerController::SetupInputComponent();

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(InputComponent))
    {
        if (IA_TiltForward)
        {
            EnhancedInput->BindAction(IA_TiltForward, ETriggerEvent::Triggered, this, &APlatformPlayerController::TiltForward);
        }

        if (IA_TiltRight)
        {
            EnhancedInput->BindAction(IA_TiltRight, ETriggerEvent::Triggered, this, &APlatformPlayerController::TiltRight);
        }
    }
}

void APlatformPlayerController::TiltForward(const FInputActionValue& Value)
{
    if (PlatformRef)
    {
        float AxisValue = Value.Get<float>();
        PlatformRef->SetTiltInput(AxisValue, PlatformRef->RightInput);
    }
}

void APlatformPlayerController::TiltRight(const FInputActionValue& Value)
{
    if (PlatformRef)
    {
        float AxisValue = Value.Get<float>();
        PlatformRef->SetTiltInput(PlatformRef->ForwardInput, AxisValue);
    }
}
