#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBossEnemyPawnBase.h"
#include "GUMISHIP_ENEMY622_STATUS.h"
#include "TresGumiShipEnemy622Pawn.generated.h"

class UParticleSystem;
class ATresGumiShipEnemyPartsBase;

UCLASS(Abstract)
class ATresGumiShipEnemy622Pawn : public ATresGumiShipBossEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pBarrierVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pProductVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAdvanceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAnglespeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MoveTimer;
    
public:
    ATresGumiShipEnemy622Pawn();
    UFUNCTION(BlueprintCallable)
    bool SetPermitFiring(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    bool SetCorePermitFiring(bool Enable);
    
    UFUNCTION(BlueprintPure)
    bool IsShieldEnable();
    
    UFUNCTION(BlueprintCallable)
    bool IsPermitFiring();
    
    UFUNCTION(BlueprintCallable)
    bool IsCorePermitFiring(ATresGumiShipEnemyPartsBase* pThis);
    
    UFUNCTION(BlueprintPure)
    int32 EnableCoreCount();
    
    UFUNCTION(BlueprintCallable)
    void _ShieldEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    bool _OnLazerTrigger();
    
    UFUNCTION(BlueprintCallable)
    void _DetachWall();
    
    UFUNCTION(BlueprintCallable)
    void _ChangeState(GUMISHIP_ENEMY622_STATUS Status);
    
    UFUNCTION(BlueprintCallable)
    void _CannonAttackChange(bool change);
    
};

