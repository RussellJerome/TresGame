#include "TresAnimNotifyState_KBDApplyKBDAssetElement.h"

UTresAnimNotifyState_KBDApplyKBDAssetElement::UTresAnimNotifyState_KBDApplyKBDAssetElement() {
    this->m_bIsResetForBegin = true;
    this->m_bIsResetPoseForBegin = true;
    this->m_PreRollForBegin = 10;
    this->m_KBDAssetUserDataForBegin = NULL;
    this->m_KeepReferencesForBegin = false;
    this->TargetElementNameForEnd = TEXT("Default");
    this->m_bIsResetForEnd = true;
    this->m_bIsResetPoseForEnd = true;
    this->m_PreRollForEnd = 10;
    this->m_KBDAssetUserDataForEnd = NULL;
    this->m_KeepReferencesForEnd = false;
}

