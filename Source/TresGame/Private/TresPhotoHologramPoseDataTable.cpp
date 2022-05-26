#include "TresPhotoHologramPoseDataTable.h"

FTresPhotoHologramPoseDataTable::FTresPhotoHologramPoseDataTable() {
    this->m_StartTime = 0.00f;
    this->PoseIndex = 0;
    this->m_bWeaponVisible = false;
    this->m_bEnableWeaponOnOff = false;
    this->m_WearForm = ETresCharWearForm::TRES_WEAR_FORM_NORMAL;
}

