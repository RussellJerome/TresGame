#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresSoundAliasLabel_WeaponHit.h"
#include "TresAttack3_e_ex202_Threat.generated.h"

class UAnimSequenceBase;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex202_Threat : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxTurnAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShakingAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionGrpName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackInterval;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bOverrideHitEffect: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_HitEffectGrpName;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_HitSEAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresSoundAliasLabel_WeaponHit::Type> m_WeaponHitSEAliasID;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bOverrideHitEffectColor: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bOverrideHitEffectAlpha: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_OverrideHitEffectColor;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTakeOverHitList: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TakeOverHitListGrpName;
    
public:
    UTresAttack3_e_ex202_Threat();
};

