#include "TresVFXManager.h"

class USkeletalMeshComponent;
class UAnimationAsset;

bool ATresVFXManager::IsSepiaMode() {
    return false;
}

USkeletalMeshComponent* ATresVFXManager::GetPlayerWepSkeletalMesh() {
    return NULL;
}

UAnimationAsset* ATresVFXManager::GetAnimAssetAndTime(USkeletalMeshComponent* in_Mesh, float& out_Time) {
    return NULL;
}

ATresVFXManager::ATresVFXManager() {
}

