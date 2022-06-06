#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionDash.h"
#include "TresAttack_e_ex020_ReflectInterface.h"
#include "UObject/NoExportTypes.h"
#include "ETresSoundAliasLabel_WeaponHit.h"
#include "TresAttack2_e_ex020_DashAttack.generated.h"

class USoundBase;
class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex020_DashAttack : public UTresAttackDefinitionDash, public ITresAttack_e_ex020_ReflectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CollisionGrpName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_AttackDataIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bOverrideHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_HitEffectGrpName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* m_HitSEAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresSoundAliasLabel_WeaponHit::Type> m_WeaponHitSEAliasID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bOverrideHitEffectColor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bOverrideHitEffectAlpha: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor m_OverrideHitEffectColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bTakeOverHitList: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_TakeOverHitListGrpName;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_WaitTimeAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_WaitTime;
    
public:
    UTresAttack2_e_ex020_DashAttack();
    
    // Fix for true pure virtual functions not being implemented
};

