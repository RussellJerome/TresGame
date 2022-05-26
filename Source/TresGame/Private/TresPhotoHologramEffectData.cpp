#include "TresPhotoHologramEffectData.h"

FTresPhotoHologramEffectData::FTresPhotoHologramEffectData() {
    this->AttachEffect = NULL;
    this->AttachType = SQEX_ATTACH_OBJECT_OWNER;
    this->WarmupTime = 0.00f;
    this->PauseEffect = false;
    this->PauseTime = 0.00f;
    this->AttachEffectEndType = ESQEX_ATTACH_EFFECT_END_TYPE_LOOPEND;
    this->FadeOut = 0.00f;
    this->EffectInvisibleInPhoto = false;
    this->IsAsWeaponEffect = false;
}

