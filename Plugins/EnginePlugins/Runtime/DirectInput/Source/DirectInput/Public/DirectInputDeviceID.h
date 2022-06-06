#pragma once
#include "CoreMinimal.h"
#include "DirectInputDeviceID.generated.h"

USTRUCT(BlueprintType)
struct DIRECTINPUT_API FDirectInputDeviceID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString VendorID;
    
    UPROPERTY(EditAnywhere)
    FString ProductID;
    
    FDirectInputDeviceID();
};

