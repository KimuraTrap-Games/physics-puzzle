#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlatformActor.h"
#include "InputActionValue.h"
#include "PlatformPlayerController.generated.h"

UCLASS()
class PHYSICSPUZZLEMAZE_API APlatformPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    APlatformPlayerController();

protected:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

    // Input Actions
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    class UInputAction* IA_TiltForward;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    class UInputAction* IA_TiltRight;

    // Reference to the platform
    UPROPERTY()
    APlatformActor* PlatformRef;

    // Input handlers
    void HandleTiltForward(const FInputActionValue& Value);
    void HandleTiltRight(const FInputActionValue& Value);
};
