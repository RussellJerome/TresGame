#include "TresGumiShipSpWeaponConnection.h"
#include "TresGumiShipEffectSetComponent.h"
#include "TresGumiShipWeaponSequence.h"

void ATresGumiShipSpWeaponConnection::_CheckAttackTerm(const TEnumAsByte<ETresGumiShipWeaponSequencePort> ePort, bool& rbCanAttack) {
}

ATresGumiShipSpWeaponConnection::ATresGumiShipSpWeaponConnection() {
    this->m_eConsumptionType = ETresGumiShipConsumptionType::CT_CHARGE_TYPE;
    this->m_dConsumptionPoint = 0;
    this->m_fCoolDownTime = 5.00f;
    this->m_bWaitForAppearEffect = true;
    this->m_pEffectSet = CreateDefaultSubobject<UTresGumiShipEffectSetComponent>(TEXT("SetEffect"));
    this->m_pWeaponSequence = CreateDefaultSubobject<UTresGumiShipWeaponSequence>(TEXT("SpecialWeaponSequence"));
}

