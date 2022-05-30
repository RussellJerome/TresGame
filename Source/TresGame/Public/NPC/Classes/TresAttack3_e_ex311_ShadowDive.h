#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex311_ShadowDive.generated.h"

class ATresProjectileBase;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack3_e_ex311_ShadowDive : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DiveParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTimeMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveStopDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DirectMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LockOnPosOffsetZ;
    
public:
    UTresAttack3_e_ex311_ShadowDive();
};

