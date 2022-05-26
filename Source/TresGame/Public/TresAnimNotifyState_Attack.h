#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "UObject/NoExportTypes.h"
#include "ETresSoundAliasLabel_WeaponHit.h"
#include "TresAnimNotifyState_Attack.generated.h"

class USoundBase;

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_Attack : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName CollisionGrpName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_AttackDataIDName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AttackInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bOverrideHitEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_HitEffectGrpName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* m_HitSEAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresSoundAliasLabel_WeaponHit::Type> m_WeaponHitSEAliasID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bOverrideHitEffectColor: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bOverrideHitEffectAlpha: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor m_OverrideHitEffectColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bTakeOverHitList: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_TakeOverHitListGrpName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bIgnoreComboCountUp: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_ComboCountUpParam;
    
public:
    UTresAnimNotifyState_Attack();
};

