#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGimmickGeneratorMI_02Base.h"
#include "TresGimmickGeneratorMI_02_PositionRateType.generated.h"

class UCurveFloat;
class ATresGimmickActor;
class AActor;

UCLASS(Abstract)
class ATresGimmickGeneratorMI_02_PositionRateType : public ATresGimmickGeneratorMI_02Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CreateNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* Curve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoveCompleteTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WaitTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> ObjectLifes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> GeneratedClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ATresGimmickActor> m_InterventionActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> m_InterventionRuleParamArray;
    
public:
    ATresGimmickGeneratorMI_02_PositionRateType();
    UFUNCTION(BlueprintCallable)
    void spawn();
    
    UFUNCTION(BlueprintCallable)
    void RefreshPosition(float Position);
    
    UFUNCTION(BlueprintPure)
    float GetMoveSpeedOneframe();
    
    UFUNCTION(BlueprintPure)
    float GetMoveSpeed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_TickStop();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_TickMove();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_MoveStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_MoveEnd();
    
};

