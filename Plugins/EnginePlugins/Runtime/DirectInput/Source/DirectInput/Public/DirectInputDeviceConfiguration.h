#pragma once
#include "CoreMinimal.h"
#include "DirectInputDeviceAxisProperties.h"
#include "DirectInputDeviceID.h"
#include "DirectInputDeviceButtonProperties.h"
#include "DirectInputDevicePOVProperties.h"
#include "DirectInputDeviceForceFeedbackProperties.h"
#include "DirectInputDeviceConfiguration.generated.h"

USTRUCT(BlueprintType)
struct DIRECTINPUT_API FDirectInputDeviceConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDirectInputDeviceID DeviceID;
    
    UPROPERTY(EditAnywhere)
    TArray<FDirectInputDeviceAxisProperties> AxisProperties;
    
    UPROPERTY(EditAnywhere)
    TArray<FDirectInputDeviceButtonProperties> ButtonProperties;
    
    UPROPERTY(EditAnywhere)
    TArray<FDirectInputDevicePOVProperties> POVProperties;
    
    UPROPERTY(EditAnywhere)
    TArray<FDirectInputDeviceForceFeedbackProperties> ForceFeedbackProperties;
    
    FDirectInputDeviceConfiguration();
};

