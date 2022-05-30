#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBossEnemyPawnBase.h"
#include "TresGumiShipEnemy620_1Pawn.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresGumiShipEnemy620_1Pawn : public ATresGumiShipBossEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pMissileVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pDepletionVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pRingVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pSaveVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pMuzzleFlashVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSaveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fLaserTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LaserTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAdvanceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxRollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxRotateRoll;
    
public:
    ATresGumiShipEnemy620_1Pawn();
    UFUNCTION(BlueprintCallable)
    void _SetPetalTakeDamage(int32 petal_no, float _fTakeDamage);
    
    UFUNCTION(BlueprintCallable)
    int32 _PetalCount();
    
    UFUNCTION(BlueprintCallable)
    int32 _LaserSaveTime();
    
};

