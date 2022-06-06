#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputCoreTypes.h"
#include "TresGameSettings.generated.h"

UCLASS(ConfigDoNotCheckDefaults, Config=GameSettings)
class UTresGameSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    uint8 GamePadDecideType;
    
    UPROPERTY(Config)
    uint8 GamePadIconType;
    
    UPROPERTY(Config)
    uint8 KeyboardDispayType;
    
    UPROPERTY(Config)
    uint8 SoundMasterVolume;
    
    UPROPERTY(Config)
    uint8 SoundBgmVolume;
    
    UPROPERTY(Config)
    uint8 SoundSeVolume;
    
    UPROPERTY(Config)
    uint8 SoundVoiceVolume;
    
    UPROPERTY(Config)
    int8 DisplayGamma;
    
    UPROPERTY(Config)
    uint8 KeyConfigCustom;
    
    UPROPERTY(Config)
    int8 MouseSensitivityCustom;
    
    UPROPERTY(Config)
    uint32 Version;
    
    UPROPERTY(Config)
    FString DispLanguage;
    
    UPROPERTY(Config)
    FString VoiceLanguage;
    
    UPROPERTY(Config)
    FKey KeyConfigMain[21];
    
    UPROPERTY(Config)
    FKey KeyConfigSub[21];
    
public:
    UTresGameSettings();
};

