#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBossEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresGumiShipSplineEventType.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemy621Pawn.generated.h"

class UTresGumiShipAtkCollisionSetCompo;
class UParticleSystem;
class UTresGumiShipWeaponSequence;
class USQEX_ParticleAttachDataAsset;

UCLASS(Abstract)
class ATresGumiShipEnemy621Pawn : public ATresGumiShipBossEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipAtkCollisionSetCompo* m_pEatAtkCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipWeaponSequence* m_pDustWeaponSequence;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_pUniqueAttachDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pMuzzleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pArrestEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pBrokenEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fChargeArrestDamage;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nBreakArrestCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fIdlingStateTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fNextPhaseHpThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDustShootPlaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fContinuosBiteTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_dDefeatedEnemyCount;
    
public:
    UPROPERTY(EditDefaultsOnly)
    float TailMass;
    
    UPROPERTY(EditDefaultsOnly)
    float TailBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float WaveSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator TailRot2;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator TailRot3;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator TailRot4;
    
    UPROPERTY(BlueprintReadOnly)
    FVector TailLoc2;
    
    UPROPERTY(BlueprintReadOnly)
    FVector TailLoc3;
    
    UPROPERTY(BlueprintReadOnly)
    FVector TailLoc4;
    
    UPROPERTY(BlueprintReadOnly)
    bool TailBlend;
    
    ATresGumiShipEnemy621Pawn();
protected:
    UFUNCTION(BlueprintCallable)
    void ToVisibleBodyMaterial(float fDuration);
    
    UFUNCTION(BlueprintCallable)
    void ToStealthBodyMaterial(float fDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineMoveSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineMoveDeceleration(float Deceleration);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineMoveAcceleration(float Acceleration);
    
    UFUNCTION(BlueprintCallable)
    void SetReverseSplineMove(bool bReverseMoveEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSplineMoveSpeed(float MaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetIdlingStateTime(float fTime);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableBodyCollision(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageArrestDustShoot(float fDamage);
    
    UFUNCTION(BlueprintCallable)
    void PauseSplineMove(bool bPauseEnable);
    
    UFUNCTION(BlueprintCallable)
    void OnStopMineSpray();
    
    UFUNCTION(BlueprintCallable)
    void OnShotMineSpray(bool bManual);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBreakDustShootMuzzle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnArrestDustShoot();
    
    UFUNCTION(BlueprintPure)
    bool IsReverseSplineMove() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPauseSplineMove() const;
    
    UFUNCTION(BlueprintPure)
    bool IsArrivedSplineEnd() const;
    
    UFUNCTION(BlueprintPure)
    float GetSplineMoveSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetSplineMoveDeceleration() const;
    
    UFUNCTION(BlueprintPure)
    float GetSplineMoveAcceleration() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSplineMoveSpeed() const;
    
    UFUNCTION()
    void _OnSplinePathMoveEvent(ETresGumiShipSplineEventType eEventType);
    
    UFUNCTION(BlueprintPure)
    bool _IsSecondPhase();
    
    UFUNCTION(BlueprintPure)
    bool _IsBrokenDustShootMuzzle();
    
    UFUNCTION(BlueprintCallable)
    void _AttachNewRootSpline(int32 dIndex);
    
};

