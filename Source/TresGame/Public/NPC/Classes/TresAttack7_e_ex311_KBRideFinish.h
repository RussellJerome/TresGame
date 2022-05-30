#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack7_e_ex311_KBRideFinish.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack7_e_ex311_KBRideFinish : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BulletNumMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_shotInterval;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_FinishBulletNumMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishShotInterval;
    
    UPROPERTY(EditAnywhere)
    float m_ShotPitchDegree;
    
    UPROPERTY(EditAnywhere)
    float m_PitchVariationDegree;
    
    UPROPERTY(EditAnywhere)
    float m_RollVariationDegree;
    
    UPROPERTY(EditAnywhere)
    float m_KBBEraseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionAttackDataID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackCollisionIntervalTime;
    
public:
    UTresAttack7_e_ex311_KBRideFinish();
};

