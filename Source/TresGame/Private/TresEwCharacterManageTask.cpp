#include "TresEwCharacterManageTask.h"

class UTresEwOpacityListAsset;
class UParticleSystemComponent;

void UTresEwCharacterManageTask::SetPlayerAlpha(float Rate, int32 Num, bool bCash) {
}

void UTresEwCharacterManageTask::SetOpacityListAsset(UTresEwOpacityListAsset* Asset) {
}

void UTresEwCharacterManageTask::SetAttachPlayerParticle(UParticleSystemComponent* Particle) {
}

int32 UTresEwCharacterManageTask::GetExistNum() {
    return 0;
}

int32 UTresEwCharacterManageTask::GetCreateNum() {
    return 0;
}

float UTresEwCharacterManageTask::GetCashRate() {
    return 0.0f;
}

int32 UTresEwCharacterManageTask::GetCashNum() {
    return 0;
}

UParticleSystemComponent* UTresEwCharacterManageTask::GetAttachPlayerParticle() {
    return NULL;
}

void UTresEwCharacterManageTask::EnableOpacity(bool bEnable, bool bComplete, int32 randPaternNum) {
}

UTresEwCharacterManageTask::UTresEwCharacterManageTask() {
    this->m_OpacityListAsset = NULL;
}

