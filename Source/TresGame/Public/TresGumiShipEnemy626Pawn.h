#pragma once
#include "CoreMinimal.h"
#include "GUMI_SHIP_ENEMY_GM626_CANNON.h"
#include "TresGumiShipBossEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "GUMI_SHIP_ENEMY_GM626_EYEMUZZLE.h"
#include "GUMI_SHIP_ENEMY_GM626_STATUS.h"
#include "GUMI_SHIP_ENEMY_GM626_SHIELD.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemy626Pawn.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresGumiShipEnemy626Pawn : public ATresGumiShipBossEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pExplosionVFX;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pSmokeVFX;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pSparkVFX;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pEngineDamage1VFX;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pEngineDamage2VFX;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pEngineDamage3VFX;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pDestructionStateVFX;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pZombieState0VFX;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pZombieState1VFX;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pPhaseExplosionVFX;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pLargeExplosionVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pLaserMuzzleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pZombieMuzzleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_CockpitMaxHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_nSubWeaponCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMissileDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCoreHpRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BladeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRotator> m_BladeRotat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaterialParamMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaterialParamMax;
    
public:
    ATresGumiShipEnemy626Pawn();
    UFUNCTION(BlueprintPure)
    bool SetPermitFiring(bool Enable);
    
private:
    UFUNCTION(BlueprintPure)
    bool SetCockpitHP(int32 _HP);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsZombie();
    
private:
    UFUNCTION(BlueprintPure)
    GUMI_SHIP_ENEMY_GM626_STATUS IsStatus();
    
    UFUNCTION(BlueprintPure)
    GUMI_SHIP_ENEMY_GM626_SHIELD IsShield();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPermitFiring();
    
    UFUNCTION(BlueprintPure)
    bool IsEngineHP();
    
private:
    UFUNCTION(BlueprintPure)
    bool IsCockpitHP_MIN();
    
    UFUNCTION(BlueprintPure)
    bool IsCockpitHP_MAX();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetCatapultNum();
    
    UFUNCTION(BlueprintPure)
    bool _StartZombieEffect();
    
private:
    UFUNCTION(BlueprintPure)
    bool _SetUpShield(GUMI_SHIP_ENEMY_GM626_SHIELD State);
    
    UFUNCTION(BlueprintCallable)
    bool _SetMeshFadeRateCall(float FadeTime, bool FadeIn);
    
public:
    UFUNCTION(BlueprintCallable)
    bool _SetDormantState(GUMI_SHIP_ENEMY_GM626_CANNON cannon, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void _SetAttackSubWeaponCount(int32 WeaponCount);
    
    UFUNCTION(BlueprintCallable)
    bool _MainWeaponNearAttack(FVector _target);
    
    UFUNCTION(BlueprintCallable)
    void _LockOnTargetUpper();
    
    UFUNCTION(BlueprintCallable)
    void _LockOnTargetLower();
    
private:
    UFUNCTION(BlueprintPure)
    bool _CheckMoveShield();
    
public:
    UFUNCTION(BlueprintPure)
    bool _CallEyeMuzzleEffect(GUMI_SHIP_ENEMY_GM626_EYEMUZZLE Type, bool Play);
    
};

