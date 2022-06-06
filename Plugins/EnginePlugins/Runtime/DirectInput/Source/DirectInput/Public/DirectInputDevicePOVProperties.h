#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "DirectInputDevicePOVProperties.generated.h"

USTRUCT(BlueprintType)
struct DIRECTINPUT_API FDirectInputDevicePOVProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    FKey Key[4];
    
    FDirectInputDevicePOVProperties();
};

