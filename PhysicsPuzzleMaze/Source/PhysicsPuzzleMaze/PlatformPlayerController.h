#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlatformActor.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "InputMappingContext.h" // <--- Make sure this include is here
#include "PlatformPlayerController.generated.h"

UCLASS()
class PHYSICSPUZZLEMAZE_API APlatformPlayerController : public APlayerController
{
    GENERATED_BODY()

protected:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

    // Input Actions
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* IA_TiltForward;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* IA_TiltRight;

    // Input Mapping Context
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputMappingContext* InputMappingContext; // <--- Add this

private:
    // Reference to the platform actor
    APlatformActor* PlatformRef;

    void TiltForward(const FInputActionValue& Value);
    void TiltRight(const FInputActionValue& Value);
};
