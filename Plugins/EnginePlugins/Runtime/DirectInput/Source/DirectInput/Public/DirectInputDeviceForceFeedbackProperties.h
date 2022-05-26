#pragma once
#include "CoreMinimal.h"
#include "FDirectInputDeviceForceFeedbackChannel.h"
#include "DirectInputDeviceForceFeedbackProperties.generated.h"

USTRUCT(BlueprintType)
struct DIRECTINPUT_API FDirectInputDeviceForceFeedbackProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDirectInputDeviceForceFeedbackChannel Channel;
    
    FDirectInputDeviceForceFeedbackProperties();
};

