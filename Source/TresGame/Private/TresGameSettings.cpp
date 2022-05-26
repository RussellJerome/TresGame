#include "TresGameSettings.h"

UTresGameSettings::UTresGameSettings() {
    this->GamePadDecideType = 0;
    this->GamePadIconType = 0;
    this->KeyboardDispayType = 0;
    this->SoundMasterVolume = 10;
    this->SoundBgmVolume = 10;
    this->SoundSeVolume = 10;
    this->SoundVoiceVolume = 10;
    this->DisplayGamma = 0;
    this->KeyConfigCustom = 0;
    this->MouseSensitivityCustom = 0;
    this->Version = 0;
    this->DispLanguage = TEXT("en");
    this->VoiceLanguage = TEXT("en");
}

