#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack18_e_ex781_IllegalFinish.generated.h"

class UCurveFloat;
class ATresProjectileBase;
class ATresProjectileGenerator_e_ex781_SlashWave;

UCLASS()
class UTresAttack18_e_ex781_IllegalFinish : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_LoopAttackBulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ChaseAttackBulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopShotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopShotIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopShotLookAheadTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex781_SlashWave> m_PatternSwordAttackState;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseAttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_ChaseAttackCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishAttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishEndWaitTime;
    
private:
    UPROPERTY()
    ATresProjectileGenerator_e_ex781_SlashWave* m_ProjectileGenerator;
    
    UPROPERTY()
    TArray<ATresProjectileBase*> m_LoopBulletList;
    
public:
    UTresAttack18_e_ex781_IllegalFinish();
};

