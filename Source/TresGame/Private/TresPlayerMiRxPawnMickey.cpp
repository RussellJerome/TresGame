#include "TresPlayerMiRxPawnMickey.h"
#include "TresGumiShipEffectSetComponent.h"

bool ATresPlayerMiRxPawnMickey::BP_ToPreLastHolyForLevel() {
    return false;
}

void ATresPlayerMiRxPawnMickey::BP_ToDownStateForLevel() {
}

void ATresPlayerMiRxPawnMickey::BP_SetEnableAttackForLevel(bool bIn) {
}

void ATresPlayerMiRxPawnMickey::BP_RequestChangeStateToTiredForLevel() {
}

void ATresPlayerMiRxPawnMickey::BP_PlayVoiceAndLipForGameStart() {
}

void ATresPlayerMiRxPawnMickey::BP_OnStartPreLastHolyForLevel() {
}

TEnumAsByte<ETresMiRxHolySealType> ATresPlayerMiRxPawnMickey::BP_GetHolySealTypeForLevel() const {
    return HOLY_SEAL_TYPE_NONE;
}

ATresPlayerMiRxPawnMickey::ATresPlayerMiRxPawnMickey() {
    this->m_pStandupCurve = NULL;
    this->m_pDownCurve = NULL;
    this->m_fOffsetForStandupCommand = 0.00f;
    this->m_fStandupAlphaResetSec = 0.50f;
    this->m_fStandupAlphaResetSpeed = 600.00f;
    this->m_fStandupAlphaAddSpeed = 30.00f;
    this->m_fStandupInputCoolDownTime = 0.17f;
    this->m_dStandupFirstInputDivisionCount = 20;
    this->m_dStandupSecondInputDivisionCount = 5;
    this->m_dStandupFirstInputDivisionCountForLevel = 20;
    this->m_dStandupSecondInputDivisionCountForLevel = 5;
    this->m_dInitializeHp = 20;
    this->m_fOffsetForHolySealCommand = 0.00f;
    this->m_fOffsetForHolySealForLastHolyCommand = 0.00f;
    this->m_fOffsetForLastHolyCommand = 0.00f;
    this->m_fWalkSpeedForHolySeal = 15.00f;
    this->m_pAddKnockBackValue = NULL;
    this->m_dMaxCountOfLastHoly = 20;
    this->m_pSizeCurveForLastHoly = NULL;
    this->m_fCoefficientForLastHolyEffect = 0.50f;
    this->m_fSpeedOfAlphaForLastHolyEffect = 3.00f;
    this->m_fAccelOfAlphaForLastHolyEffect = 0.01f;
    this->m_pGuardReflectEffectAsset = NULL;
    this->m_fRefreshTimeForAttackTired = 10.00f;
    this->m_dAttackCountLimitForTired = 3;
    this->m_fWalkDistForTired = 500.00f;
    this->m_fTiredTimeForAttack = 1.00f;
    this->m_fTiredTimeForWalkDist = 5.00f;
    this->m_fTiredTimeForForce = 5.00f;
    this->m_fIdleTimeForTiredAfter = 1.00f;
    this->m_fHitSlowTime = 0.30f;
    this->m_dCountOfTakeDirectAttack = 3;
    this->m_pEffectSet = CreateDefaultSubobject<UTresGumiShipEffectSetComponent>(TEXT("SetEffect"));
    this->m_fCameraResetTime = 2.00f;
    this->m_fTimeOfUntilCameraReset = 5.00f;
}

