#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipGimmickCharaBase.generated.h"

class UTresSkeletalMeshComponent;

UCLASS(Abstract)
class ATresGumiShipGimmickCharaBase : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* m_pSkeletalMesh;
    
public:
    ATresGumiShipGimmickCharaBase();
    UFUNCTION(BlueprintCallable)
    float PlayAnimByAnimSet(FName AnimName, FName SlotName, float fBlendInTime, int32 dFlags, int32 dEffectGroup, float fPlayRate, const FVector2D& rvRootTransScale);
    
    UFUNCTION(BlueprintPure)
    bool IsAnimEnd(const FName SlotName) const;
    
    UFUNCTION(BlueprintPure)
    float GetAnimCurrentTime(const FName SlotName) const;
    
    UFUNCTION(BlueprintPure)
    FName GetAnimCurrentName(const FName SlotName) const;
    
    UFUNCTION(BlueprintPure)
    float GetAnimCurrentLength(const FName SlotName) const;
    
};

