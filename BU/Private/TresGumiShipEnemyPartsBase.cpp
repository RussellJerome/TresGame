#include "TresGumiShipEnemyPartsBase.h"

class ATresGumiShipEnemyPawnBase;

void ATresGumiShipEnemyPartsBase::SetLockOnPermissionAll(bool LockOnEnable) {
}

void ATresGumiShipEnemyPartsBase::SetAttachEffectsVisibility(bool Visibility) {
}

void ATresGumiShipEnemyPartsBase::SetAllMeshVisibility(bool Visibility) {
}

bool ATresGumiShipEnemyPartsBase::IsLockOnPermissionOK() const {
    return false;
}

void ATresGumiShipEnemyPartsBase::HideEnemyParts(bool HiddenEnable) {
}

ATresGumiShipEnemyPawnBase* ATresGumiShipEnemyPartsBase::GetPartsOwnerEnemy() const {
    return NULL;
}

FName ATresGumiShipEnemyPartsBase::GetEnemyPartsID() const {
    return NAME_None;
}

ATresGumiShipEnemyPartsBase::ATresGumiShipEnemyPartsBase() {
    this->m_EnemyPartsID = TEXT("e_gmXXX_0");
    this->m_pEffectAttachDataAsset = NULL;
    this->m_bUsingAutoDestorySystem = false;
    this->m_bDestoryWithMeshFadeOut = true;
    this->m_fPartsDestoryFadeTime = 1.00f;
    this->m_fPartsMeshHideDelayTime = 0.00f;
}

