#include "TresEnemyPawn_e_ex306.h"
#include "TresClaymoreManager_e_ex306.h"

void ATresEnemyPawn_e_ex306::SetMasterLightCoefficientDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresEnemyPawn_e_ex306::SetMasterLightCoefficient(float InTransitionTime, float InCoefficient, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresEnemyPawn_e_ex306::OpenHudSaix() {
}

bool ATresEnemyPawn_e_ex306::IsBodyTypeStun() const {
    return false;
}

bool ATresEnemyPawn_e_ex306::IsBodyTypeNormal() const {
    return false;
}

bool ATresEnemyPawn_e_ex306::IsBodyTypeBlueBurst() const {
    return false;
}

bool ATresEnemyPawn_e_ex306::IsBodyTypeBerserk() const {
    return false;
}

bool ATresEnemyPawn_e_ex306::IsBerserkGageZero() const {
    return false;
}

bool ATresEnemyPawn_e_ex306::IsBerserkGageMax() const {
    return false;
}

bool ATresEnemyPawn_e_ex306::IsBerserkGage200() const {
    return false;
}

bool ATresEnemyPawn_e_ex306::IsBerserkGage100() const {
    return false;
}

void ATresEnemyPawn_e_ex306::DebugThinkOfYouDamageDisp(int32 InNum) {
}

void ATresEnemyPawn_e_ex306::DebugBodyTypeFunc(int32 InNum) {
}

void ATresEnemyPawn_e_ex306::DebugBerserkGageFunc(int32 InNum) {
}

void ATresEnemyPawn_e_ex306::CloseHudSaix() {
}


ATresEnemyPawn_e_ex306::ATresEnemyPawn_e_ex306() {
    this->m_bBlueBurst = false;
    this->m_bSpawnClaymore = false;
    this->m_bForceStrongBodyDamageOnBlue = true;
    this->m_bForceStrongWorkResetOnBlue = true;
    this->m_bForceStrongBodyDamageOnStun = true;
    this->m_fMaxBerserkValue = 0.00f;
    this->m_bGaugeUI = true;
    this->m_AddBerserkGageCurve = NULL;
    this->m_fOnDamageAddBerserkGageRate = 0.00f;
    this->m_AddBerserkGageCurve_PhaseEx1 = NULL;
    this->m_fOnDamageAddBerserkGageRate_PhaseEx1 = 0.00f;
    this->m_SubBerserkGageCurve_PhaseEx1 = NULL;
    this->m_fOnDamageSubBerserkGageRate_PhaseEx1 = 0.00f;
    this->m_HealBerserkGageCurve_PhaseEx1 = NULL;
    this->m_fOnDamageAddBerserkGageRate_Heal_PhaseEx1 = 0.00f;
    this->m_HealBerserkGageCurve_PhaseEx1_ThinkOfYou = NULL;
    this->m_fOnDamageAddBerserkGageRate_Heal_PhaseEx1_ThinkOfYou = 0.00f;
    this->m_SubBerserkGageCurve = NULL;
    this->m_fOnDamageSubBerserkGageRate = 0.00f;
    this->m_HealBerserkGageCurve = NULL;
    this->m_fOnDamageAddBerserkGageRate_Heal = 0.00f;
    this->m_AddBerserkGageCurve_Berserk = NULL;
    this->m_fOnDamageAddBerserkGageRate_Berserk = 0.00f;
    this->m_pWeaponClaymore = NULL;
    this->m_ClaymoreManager = CreateDefaultSubobject<UTresClaymoreManager_e_ex306>(TEXT("ClaymoreManager"));
}

