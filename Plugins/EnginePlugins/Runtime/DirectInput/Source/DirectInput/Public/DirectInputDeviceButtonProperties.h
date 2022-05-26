#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "DirectInputDeviceButtonProperties.generated.h"

USTRUCT(BlueprintType)
struct DIRECTINPUT_API FDirectInputDeviceButtonProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    FKey Key;
    
    FDirectInputDeviceButtonProperties();
};

