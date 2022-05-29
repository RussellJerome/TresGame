#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "DirectInputDeviceConfiguration.h"
#include "DirectInputIgnoreDeviceSettings.h"
#include "DirectInputCalibration.h"
#include "Engine/DeveloperSettings.h"
#include "DirectInputSettings.generated.h"

UCLASS(DefaultConfig, Config=Input)
class DIRECTINPUT_API UDirectInputSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FDirectInputDeviceConfiguration> DeviceConfigurations;
    
    UPROPERTY(Config, EditAnywhere)
    float InitialButtonRepeatDelay;
    
    UPROPERTY(Config, EditAnywhere)
    float ButtonRepeatDelay;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectInputIgnoreDeviceSettings IgnoreDeviceSettings;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FDirectInputCalibration> DeviceCalibrations;
    
    UDirectInputSettings();
};

