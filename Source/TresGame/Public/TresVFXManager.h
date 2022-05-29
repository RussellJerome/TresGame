#pragma once
#include "CoreMinimal.h"
#include "SQEX_VFXManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_VFXManager -FallbackName=SQEX_VFXManager
#include "TresVFXManager.generated.h"

class USkeletalMeshComponent;
class UAnimationAsset;

UCLASS()
class ATresVFXManager : public ASQEX_VFXManager {
    GENERATED_BODY()
public:
    ATresVFXManager();
    UFUNCTION(BlueprintCallable)
    bool IsSepiaMode();
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetPlayerWepSkeletalMesh();
    
    UFUNCTION(BlueprintCallable)
    UAnimationAsset* GetAnimAssetAndTime(USkeletalMeshComponent* in_Mesh, float& out_Time);
    
};

