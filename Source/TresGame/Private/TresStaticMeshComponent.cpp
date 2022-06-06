#include "TresStaticMeshComponent.h"

void UTresStaticMeshComponent::BP_MaterialSetVectorParamAll(TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, FLinearColor InVector) {
}

void UTresStaticMeshComponent::BP_MaterialSetVectorParam(int32 InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, FLinearColor InVector) {
}

void UTresStaticMeshComponent::BP_MaterialSetScalarParamAll(TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar) {
}

void UTresStaticMeshComponent::BP_MaterialSetScalarParam(int32 InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar) {
}

UTresStaticMeshComponent::UTresStaticMeshComponent() {
    this->m_bDisableAutoMaterialInstanceDynamics = false;
}

