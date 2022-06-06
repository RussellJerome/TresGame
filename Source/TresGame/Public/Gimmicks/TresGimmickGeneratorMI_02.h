#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorMI_02Base.h"
#include "TresGimmickGeneratorMI_02.generated.h"

class UTresMI_02BossPartsGeneratorRule;
class AActor;

UCLASS(Abstract)
class ATresGimmickGeneratorMI_02 : public ATresGimmickGeneratorMI_02Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpeedWaterSplineNone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTresMI_02BossPartsGeneratorRule* GeneratorData;
    
public:
    ATresGimmickGeneratorMI_02();
    UFUNCTION(BlueprintCallable)
    void spawn();
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedRate(float _rate);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedAndWaterSpeedRate(float _speedRate);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedAndWaterSpeed(float _speed);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float _speed);
    
    UFUNCTION(BlueprintCallable)
    void SetBossPartsVisibility(bool Visible);
    
    UFUNCTION(BlueprintPure)
    float GetMoveSpeed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_SleepActor(AActor* Actor);
    
};

