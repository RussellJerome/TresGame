#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "DirectInputDeviceAxisProperties.generated.h"

USTRUCT(BlueprintType)
struct DIRECTINPUT_API FDirectInputDeviceAxisProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    FKey Key;
    
    UPROPERTY(EditAnywhere)
    uint8 bInverted: 1;
    
    FDirectInputDeviceAxisProperties();
};

