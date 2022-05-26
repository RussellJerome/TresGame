#include "TresEnemyPawn_e_ex358.h"
#include "TresProjectileManagerComponent_e_ex358_Jinrai.h"

void ATresEnemyPawn_e_ex358::SetDebugAvatarWildDanceIndex(int32 Index) {
}

bool ATresEnemyPawn_e_ex358::IsJinraiBeforeAttackHit() const {
    return false;
}

void ATresEnemyPawn_e_ex358::EndWildDanceDarkMode() {
}

ATresEnemyPawn_e_ex358::ATresEnemyPawn_e_ex358() {
    this->MyProjectileManager = CreateDefaultSubobject<UTresProjectileManagerComponent_e_ex358_Jinrai>(TEXT("MyProjectileManager"));
    this->m_AvatarClass = NULL;
    this->m_bIsAvatar = false;
    this->m_bEnableSyncAttractionHitPoint = true;
    this->m_WildDanceDisappearDamageNum = 4;
    this->m_WildDanceDisappearDelayTime = 1.00f;
    this->m_WildDanceWarpOutDisableLockonDelayTime = 0.00f;
    this->m_WildDanceDamageDisableLockonStartTime = 100.00f;
    this->m_bEnableWildDaanceChangeManualLockonOtherAvatar = true;
    this->m_ThunderStepParticleSystem = NULL;
    this->m_ThunderStepEndParticleSystem = NULL;
    this->m_ThunderStepAuraParticleSystem = NULL;
    this->m_ThunderStepEffectColorChangeInterpTime = 0.00f;
    this->m_AvatarWildDanceLandEnvQuery = NULL;
    this->m_AvatarWildDanceAirEnvQuery = NULL;
}

