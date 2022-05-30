#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SQEX_EffectCurveData.h"
#include "TresAnimNotifyState_EffectCurve.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_EffectCurve : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    FName AnimSlotName;
    
    UPROPERTY(EditAnywhere)
    TArray<FSQEX_EffectCurveData> CurveDatas;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EndValue;
    
    UTresAnimNotifyState_EffectCurve();
};

