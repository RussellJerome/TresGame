#include "TresSkeletalMeshComponent.h"

void UTresSkeletalMeshComponent::BP_MaterialSetVectorParamAll(TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, FLinearColor InVector) {
}

void UTresSkeletalMeshComponent::BP_MaterialSetVectorParam(int32 InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, FLinearColor InVector) {
}

void UTresSkeletalMeshComponent::BP_MaterialSetScalarParamAll(TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar) {
}

void UTresSkeletalMeshComponent::BP_MaterialSetScalarParam(int32 InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar) {
}

int32 UTresSkeletalMeshComponent::BP_GetPredictedLODLevel() {
    return 0;
}

UTresSkeletalMeshComponent::UTresSkeletalMeshComponent() {
    this->m_bCanbeDetectAsBodyColl = false;
    this->m_BodyCollIgnoreNameNoneGroup = false;
    this->m_BodyCollReactionType = ETresBodyCollReactionType::TRES_BODY_RT_DEFAULT;
    this->m_bNeedSnowRenderDepthPrimitive = false;
    this->m_bEnableSyncAnimPlay = false;
    this->m_bEnableBonamikWhenOwnerHidden = false;
    this->m_bEnableCollisionFootStep = false;
    this->m_bDisableCollisionFootStepLOD = -1;
    this->m_pDetectPhysMaterial = NULL;
    this->m_pDetectWaterPhysMaterial = NULL;
    this->m_pDetectInnerWaterPhysMaterial = NULL;
    this->m_pSnowTailComp = NULL;
}

