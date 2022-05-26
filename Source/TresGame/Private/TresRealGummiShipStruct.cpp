#include "TresRealGummiShipStruct.h"

FTresRealGummiShipStruct::FTresRealGummiShipStruct() {
    this->m_pSkeltalMesh = NULL;
    this->m_pSkeletalMeshComponent = NULL;
    this->m_pSceneComponent = NULL;
    this->m_nUniqueID = 0;
    this->m_nMterialID = 0;
    this->m_nPattern = 0;
    this->m_NormalTexture = NULL;
    this->m_NormalTexUVIndex = 0.00f;
    this->m_AOTexture = NULL;
    this->m_AOTexUVIndex = 0.00f;
    this->m_nPartsColorIndex = 0;
    this->m_nMaterialColorIndex = 0;
    this->m_RotateAxisX = 0.00f;
    this->m_RotateAxisY = 0.00f;
    this->m_RotateAxisZ = 0.00f;
    this->m_RotateSpeed = 0.00f;
    this->m_UVScrollSpeedU = 0.00f;
    this->m_UVScrollSpeedV = 0.00f;
}

