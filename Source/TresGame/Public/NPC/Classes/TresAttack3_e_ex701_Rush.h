#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex701_Rush.generated.h"

class UAnimSequenceBase;
class UBlendSpaceBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex701_Rush : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_TurnAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UBlendSpaceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TurnAttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BoneTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BoneMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchMinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackHtiTargetHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ActionEndWallHitAngle;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsEndAttackHit: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OvertakeDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndOvertakeDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileMaxDistance;
    
public:
    UTresAttack3_e_ex701_Rush();
};

