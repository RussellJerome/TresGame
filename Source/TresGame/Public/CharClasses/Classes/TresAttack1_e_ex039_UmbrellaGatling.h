#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex039_UmbrellaGatling.generated.h"

class UBlendSpaceBase;
class UAnimSequenceBase;
class ATresProjectileBase;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack1_e_ex039_UmbrellaGatling : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UBlendSpaceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UBlendSpaceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UBlendSpaceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_ReloadAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EndBulletParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumShot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimOffsetValue;
    
public:
    UTresAttack1_e_ex039_UmbrellaGatling();
};

