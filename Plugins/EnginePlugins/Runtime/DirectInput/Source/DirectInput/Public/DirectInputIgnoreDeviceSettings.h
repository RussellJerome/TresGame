#pragma once
#include "CoreMinimal.h"
#include "DirectInputDeviceID.h"
#include "DirectInputIgnoreDeviceSettings.generated.h"

USTRUCT(BlueprintType)
struct DIRECTINPUT_API FDirectInputIgnoreDeviceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bIgnoreXInputDevice;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIgnoreDualShock4;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FDirectInputDeviceID> IgnoreDevices;
    
    FDirectInputIgnoreDeviceSettings();
};

