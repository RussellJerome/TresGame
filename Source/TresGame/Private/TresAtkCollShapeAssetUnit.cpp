#include "TresAtkCollShapeAssetUnit.h"

FTresAtkCollShapeAssetUnit::FTresAtkCollShapeAssetUnit() {
    this->m_ShapeType = ETresCollision::SPHERE;
    this->m_Mesh = NULL;
    this->m_AttachType1 = ETresAtkCollLocationAttachType::NORMAL;
    this->m_bSocketName1UseParentSkeleton = false;
    this->m_bAbsoluteOffset1 = false;
    this->m_bDisableLocation1Attach = false;
    this->m_AttachType2 = ETresAtkCollLocationAttachType::NORMAL;
    this->m_bSocketName2UseParentSkeleton = false;
    this->m_bAbsoluteOffset2 = false;
    this->m_bDisableLocation2Attach = false;
    this->m_SizeVectorCurve = NULL;
    this->m_bSizeVectorCurveLoop = false;
    this->m_RotAttachType = ETresAtkCollRotAttachType::TRES_ACRA_NORMAL;
    this->m_ScaleVectorCurve = NULL;
    this->m_bScaleVectorCurveLoop = false;
    this->m_bDisableSweep = false;
    this->m_bEnablePawnRootCollision = false;
    this->m_bIsPhysAttackCollision = false;
    this->m_MapHitType = ETresAtkCollMapHitType::NOHIT;
    this->m_bEnableMapHit = false;
    this->m_bDisableGround = false;
    this->m_bDisableTakeDamage = false;
    this->m_bDisableTeamCheck = false;
    this->m_bZeroDamageIfSameTeam = false;
    this->m_bDisableCharHit = false;
    this->m_bIgnoreParentScale = false;
    this->m_HitSEAsset = NULL;
    this->m_HitSEID = SEAL_NOTHING;
}

