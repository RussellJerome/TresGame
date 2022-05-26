#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex203_Eat.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex203_Eat : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_FailAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InhaleSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ScaleDownSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DrawSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_SuctionCollisionGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_EatDamageAttackIDName;
    
    UPROPERTY(EditDefaultsOnly, SimpleDisplay)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
public:
    UTresAttack4_e_ex203_Eat();
};

