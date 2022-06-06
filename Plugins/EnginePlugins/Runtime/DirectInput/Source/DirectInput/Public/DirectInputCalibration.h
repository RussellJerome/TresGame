#pragma once
#include "CoreMinimal.h"
#include "DirectInputDeviceID.h"
#include "DirectInputCalibration.generated.h"

USTRUCT(BlueprintType)
struct DIRECTINPUT_API FDirectInputCalibration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDirectInputDeviceID DeviceID;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ButtonSources[16];
    
    FDirectInputCalibration();
};

