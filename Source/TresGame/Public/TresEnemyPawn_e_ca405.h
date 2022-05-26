#pragma once
#include "CoreMinimal.h"
#include "TresEnemyShipPawnBase.h"
#include "ca405MovementParam.h"
#include "ca405MaelstromSpawnParameter.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ca405SpawnModeSignatureDelegate.h"
#include "TresEnemyPawn_e_ca405.generated.h"

class UCurveVector;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS()
class ATresEnemyPawn_e_ca405 : public ATresEnemyShipPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_RotCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotCurveTime;
    
    UPROPERTY(EditAnywhere)
    bool m_bMaelstromMode;
    
    UPROPERTY(EditAnywhere)
    Fca405MovementParam m_moveParam;
    
    UPROPERTY(EditAnywhere)
    Fca405MaelstromSpawnParameter m_nearSpawnParam;
    
    UPROPERTY(EditAnywhere)
    Fca405MaelstromSpawnParameter m_backSpawnParam;
    
    UPROPERTY(EditAnywhere)
    Fca405MaelstromSpawnParameter m_farSpawnParam0;
    
    UPROPERTY(EditAnywhere)
    Fca405MaelstromSpawnParameter m_farSpawnParam1;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> m_RateCountOfFarSpawn1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_ShipTrackParticle;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 m_DestroyShipTrackNotifyID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 m_InvincibleOnNotifyID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 m_CreateShipTrackNotifyID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 m_InvincibleOffNotifyID;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_ShipTrackParticleComp;
    
public:
    UPROPERTY(BlueprintAssignable)
    FTresEnemyPawn_e_ca405SpawnModeSignature OnLotteryNextSpawnPoint;
    
    ATresEnemyPawn_e_ca405();
    UFUNCTION(BlueprintCallable)
    void SetMissionStartTime(bool bStart);
    
    UFUNCTION(BlueprintPure)
    bool IsMissionStarted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMaelstromMode() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeMission(const FVector initPlayerLocation, int32 initMode);
    
    UFUNCTION(BlueprintPure)
    float GetTimeSinceMissionStarted() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLocationMode() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHitPointOfMaelstromMode() const;
    
};

