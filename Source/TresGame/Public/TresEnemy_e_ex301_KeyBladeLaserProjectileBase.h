#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemy_e_ex301_KeyBladeLaserProjectileBase.generated.h"

class ATresProjectileBase;

UCLASS()
class ATresEnemy_e_ex301_KeyBladeLaserProjectileBase : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_ChangeDist;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_DirectChange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackRoll;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_AttackSize;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_AttackAddRot;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_AddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_AttackStopRot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LockOnAttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ChildShotNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChildShotTime;
    
public:
    ATresEnemy_e_ex301_KeyBladeLaserProjectileBase();
};

