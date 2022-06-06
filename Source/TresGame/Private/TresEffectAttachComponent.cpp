#include "TresEffectAttachComponent.h"

class UMeshComponent;
class USQEX_ParticleAttachDataAsset;
class UObject;
class AActor;

void UTresEffectAttachComponent::SpawnAttachEffect(UMeshComponent* in_MeshComp, USQEX_ParticleAttachDataAsset* in_AttachData, int32 in_GroupID, bool in_UseDesignatedData) {
}

void UTresEffectAttachComponent::SetVectorParameter(int32 in_GroupID, FName in_ParamName, FVector in_Param, bool bEqual) {
}

void UTresEffectAttachComponent::SetSpawnStop(bool in_NewState) {
}

void UTresEffectAttachComponent::SetObjectParameter(int32 in_GroupID, FName in_ParamName, UObject* in_Param, bool bEqual) {
}

void UTresEffectAttachComponent::SetFloatParameter(int32 in_GroupID, FName in_ParamName, float in_Param, bool bEqual) {
}

void UTresEffectAttachComponent::SetEffectVisibility(int32 in_GroupID, bool in_NewVisibility, bool bEqual) {
}

void UTresEffectAttachComponent::SetColorParameter(int32 in_GroupID, FName in_ParamName, FLinearColor in_Param, bool bEqual) {
}

void UTresEffectAttachComponent::SetActorParameter(int32 in_GroupID, FName in_ParamName, AActor* in_Param, bool bEqual) {
}

void UTresEffectAttachComponent::Set(UMeshComponent* in_MeshComp, int32 in_Group, bool bContinue) {
}

void UTresEffectAttachComponent::ResetEffects(int32 in_GroupID, bool bEqual) {
}

bool UTresEffectAttachComponent::IsSpawnStop() {
    return false;
}

bool UTresEffectAttachComponent::IsComplete(int32 in_GroupID) {
    return false;
}

USQEX_ParticleAttachDataAsset* UTresEffectAttachComponent::GetDesignatedAttachData(FName in_DataKey) {
    return NULL;
}

void UTresEffectAttachComponent::FadeOutEffect(float in_FadeOutTime, int32 in_GroupID, bool bEqual) {
}

void UTresEffectAttachComponent::EndEffect(int32 in_GroupID, bool bEqual) {
}

void UTresEffectAttachComponent::DestroyEffects(int32 in_GroupID, bool bEqual) {
}

UTresEffectAttachComponent::UTresEffectAttachComponent() {
}

