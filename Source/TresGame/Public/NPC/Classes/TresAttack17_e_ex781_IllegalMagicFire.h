#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack17_e_ex781_IllegalMagicFire.generated.h"

class ATresProjectileBase;
class UEnvQuery;

UCLASS()
class UTresAttack17_e_ex781_IllegalMagicFire : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_ToTargetSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveStartWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsWarpOut;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackUpDataTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingEndDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndWarpDist;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_UseStartMotion;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BulletPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BulletRandPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BulletYaw;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BulletShotNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BulletIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BulletCenterDist;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UTresAttack17_e_ex781_IllegalMagicFire();
};

