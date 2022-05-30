#include "TresEnemyPawn_e_ex355.h"
#include "TresClaymoreManager_e_ex355.h"

void ATresEnemyPawn_e_ex355::SetMasterLightCoefficientDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresEnemyPawn_e_ex355::SetMasterLightCoefficient(float InTransitionTime, float InCoefficient, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresEnemyPawn_e_ex355::OpenHudSaix() {
}

bool ATresEnemyPawn_e_ex355::IsDamageBodyReactionCoroutineFinished() const {
    return false;
}

bool ATresEnemyPawn_e_ex355::IsBodyTypeStun() const {
    return false;
}

bool ATresEnemyPawn_e_ex355::IsBodyTypeNormal() const {
    return false;
}

bool ATresEnemyPawn_e_ex355::IsBodyTypeCharge() const {
    return false;
}

bool ATresEnemyPawn_e_ex355::IsBodyTypeBlueBurst() const {
    return false;
}

bool ATresEnemyPawn_e_ex355::IsBodyTypeBerserk() const {
    return false;
}

bool ATresEnemyPawn_e_ex355::IsBerserkGageZero() const {
    return false;
}

bool ATresEnemyPawn_e_ex355::IsBerserkGageMax() const {
    return false;
}

bool ATresEnemyPawn_e_ex355::IsBerserkGage200() const {
    return false;
}

bool ATresEnemyPawn_e_ex355::IsBerserkGage100() const {
    return false;
}

void ATresEnemyPawn_e_ex355::DebugBodyTypeFunc(int32 InNum) {
}

void ATresEnemyPawn_e_ex355::DebugBerserkGageFunc(int32 InNum) {
}

void ATresEnemyPawn_e_ex355::CloseHudSaix() {
}


ATresEnemyPawn_e_ex355::ATresEnemyPawn_e_ex355() {
    this->m_bSpawnClaymore = false;
    this->m_bVisibleWeaponOnDamage = false;
    this->m_bDefaultBodyReactionTypeOnDamage = false;
    this->m_fResetBodyReactionTypeOnLandDelayTime = 0.00f;
    this->m_bForceStrongBodyDamageOnStun = true;
    this->m_iMaxBodyStrongValueOnRevenge = 0;
    this->m_bModifyMaxBodyStrongValueOnRevenge = false;
    this->m_BodyReactionTypeOnGageZero = ETresBodyCollReactionType::TRES_BODY_RT_INVINCIBLE;
    this->m_bBodyReactionTypeOnGageZero = false;
    this->m_BodyReactionTypeOnGage200 = ETresBodyCollReactionType::TRES_BODY_RT_INVINCIBLE;
    this->m_bBodyReactionTypeOnGage200 = false;
    this->m_bCanRevengeOnGageZero = false;
    this->m_bCanRevengeOnGaze200 = false;
    this->m_fMaxBerserkValue = 0.00f;
    this->m_bGaugeUI = true;
    this->m_SubBerserkGageCurve = NULL;
    this->m_fOnDamageSubBerserkGageRate = 0.00f;
    this->m_iOnDamageSubBerserkGageRate_MaxReactionPower = 0;
    this->m_bOnDamageSubBerserkGageRate_MaxReactionPower = false;
    this->m_AddBerserkGageCurve_Charge = NULL;
    this->m_HealBerserkGageCurve = NULL;
    this->m_AddBerserkGageCurve_Berserk = NULL;
    this->m_fOnDamageAddBerserkGageRate_Berserk = 0.00f;
    this->m_pWeaponClaymore = NULL;
    this->m_ClaymoreManager = CreateDefaultSubobject<UTresClaymoreManager_e_ex355>(TEXT("ClaymoreManager"));
}

