#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlatformActor.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "PlatformPlayerController.generated.h"

UCLASS()
class PHYSICSPUZZLEMAZE_API APlatformPlayerController : public APlayerController
{
    GENERATED_BODY()

protected:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

    // Input Mapping Context for Enhanced Input
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputMappingContext* InputMappingContext;

    // Input Actions
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* IA_TiltForward;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* IA_TiltRight;

private:
    // Reference to the platform actor
    APlatformActor* PlatformRef;

    void TiltForward(const FInputActionValue& Value);
    void TiltRight(const FInputActionValue& Value);
};
