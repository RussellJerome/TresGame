#include "TresEnemyPawn_e_ex351.h"

class UObject;
class ATresEnemyPawn_e_ex351;

void ATresEnemyPawn_e_ex351::TimeRushSendEvent(UObject* WorldContextObject, ETresEnemyEx351TimeRushEvent EventType) {
}

bool ATresEnemyPawn_e_ex351::IsTimeStopSlow() {
    return false;
}

bool ATresEnemyPawn_e_ex351::IsTimeRushStartReazonDamageReaction() {
    return false;
}

bool ATresEnemyPawn_e_ex351::IsTimeRushFinishOneCycle() {
    return false;
}

bool ATresEnemyPawn_e_ex351::IsTimeRush() const {
    return false;
}

bool ATresEnemyPawn_e_ex351::IsTakaDamageTimeStopCancel() {
    return false;
}

bool ATresEnemyPawn_e_ex351::IsHitWhipComboAttack() {
    return false;
}

bool ATresEnemyPawn_e_ex351::IsHitMaliceWhipAttack() {
    return false;
}

bool ATresEnemyPawn_e_ex351::IsForceWarpIn() {
    return false;
}

int32 ATresEnemyPawn_e_ex351::IsEndTimeRushComboNum() {
    return 0;
}

bool ATresEnemyPawn_e_ex351::IsEndAllTimeRushCombo() {
    return false;
}

bool ATresEnemyPawn_e_ex351::IsConditionFinalTimeRush() const {
    return false;
}

bool ATresEnemyPawn_e_ex351::IsArmorBreakAfterWarp() {
    return false;
}

void ATresEnemyPawn_e_ex351::DebugStartTimeRushCombo() {
}

void ATresEnemyPawn_e_ex351::DebugSetTimeRushComboIndex(int32 Index) {
}

void ATresEnemyPawn_e_ex351::DebugEndTimeRushCombo() {
}

ATresEnemyPawn_e_ex351* ATresEnemyPawn_e_ex351::BP_GetAvaterSelectRoleNumber(int32 InSelectRoleNumber) {
    return NULL;
}

void ATresEnemyPawn_e_ex351::BP_FinishTimeRush() {
}

void ATresEnemyPawn_e_ex351::BP_EnableArmorBreakAfterWarp(bool bEnable) {
}

ATresEnemyPawn_e_ex351::ATresEnemyPawn_e_ex351() {
    this->m_AvatarPawnClass = NULL;
    this->m_bIsAvatarPawn = false;
    this->m_SlowFadeTime = 1.00f;
    this->m_AfterImageStartVisibleTime = 0.00f;
    this->m_AfterImageFront = 45.00f;
    this->m_AfterImageLeftRight = 135.00f;
    this->m_NegativeReversalEffectData = NULL;
    this->m_TimeRushWeatherEffectData = NULL;
    this->m_TimeRushFloorEffectData = NULL;
    this->m_TimeRushLongHandEffectData = NULL;
    this->m_TimeRushShortHandEffectData = NULL;
    this->m_TimeRushAudioData = NULL;
    this->m_TimeRushAudioFadeOutTime = 1.50f;
    this->m_TimeRushLongHandRewindCurveData = NULL;
    this->m_TimeRushInvisibleAttackNum = 5;
    this->m_bIsTimeRushShutDownFreezeShot = false;
    this->m_NegativeReversalEffectCmp = NULL;
    this->m_TimeRushWeatherEffectCmp = NULL;
    this->m_TimeRushFloorEffectCmp = NULL;
    this->m_TimeRushLongHandEffectCmp = NULL;
    this->m_TimeRushShortHandEffectCmp = NULL;
    this->m_MaliceWhipSmallContinuousProjectileClass = NULL;
    this->m_MaliceWhipFloorEffectData = NULL;
    this->m_ChangeLastAttackHitNum = 7;
    this->m_SlowRateStartTime = 0.05f;
    this->m_SlowRate = 0.01f;
    this->m_SmallContinuousStartTime = 0.80f;
}

