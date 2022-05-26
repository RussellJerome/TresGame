#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorBase.h"
#include "TresBxCarGenerator.generated.h"

class UTresCarGenerateDataRuleAsset;
class ASQEX_SplineActor;

UCLASS(Abstract)
class ATresBxCarGenerator : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTresCarGenerateDataRuleAsset* CarDataAsset;
    
    UPROPERTY(EditInstanceOnly)
    ASQEX_SplineActor* splineActor;
    
    UPROPERTY(EditAnywhere)
    float CarSpeed;
    
    UPROPERTY(EditAnywhere)
    float CarAccelSpeed;
    
    UPROPERTY(EditAnywhere)
    float CurveCarSpeed;
    
    UPROPERTY(EditAnywhere)
    float HighSpeedRate;
    
    UPROPERTY(EditAnywhere)
    int32 GenerateMaxNum;
    
    UPROPERTY(EditAnywhere)
    float CarSpanMin;
    
    UPROPERTY(EditAnywhere)
    float CarSpanMax;
    
    UPROPERTY(EditAnywhere)
    float CarSpeedRandomRange;
    
    UPROPERTY(EditAnywhere)
    FName GeneratorName;
    
    ATresBxCarGenerator();
    UFUNCTION(BlueprintCallable)
    void SetEnableCreateCars(bool Enable);
    
};

