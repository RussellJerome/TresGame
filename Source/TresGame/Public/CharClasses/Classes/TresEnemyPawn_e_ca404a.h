#pragma once
#include "CoreMinimal.h"
#include "TresEnemyLargeShipPawnBase.h"
#include "ca404aSplineParam.h"
#include "SQEX_SplineMoverExecutor.h"
#include "ca404aParam.h"
#include "TresEnemyPawn_e_ca404a.generated.h"

class UCurveVector;
class ASQEX_SplineActor;
class AActor;

UCLASS()
class ATresEnemyPawn_e_ca404a : public ATresEnemyLargeShipPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSQEX_SplineMoverExecutor SplineMover;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UCurveVector* m_VelocityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    Fca404aParam m_Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    Fca404aSplineParam m_SplineParam;
    
public:
    ATresEnemyPawn_e_ca404a();
protected:
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMissionStartTime(bool bStart);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetGoalActor(AActor* Actor);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsMissionStarted() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeSinceMissionStarted() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_SetStopRunning(bool Value);
    
    UFUNCTION(BlueprintPure)
    bool BP_IsStopRunning() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetTargetShipSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetRestTimeDamageRecovery() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetDistanceToPlayerSideward() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetDistanceToPlayerForward() const;
    
    UFUNCTION(BlueprintPure)
    int32 BP_GetCurrentDamageCount() const;
    
};

