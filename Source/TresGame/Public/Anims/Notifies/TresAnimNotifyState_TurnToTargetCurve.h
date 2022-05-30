#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_TurnToTargetCurve.generated.h"

class UCurveFloat;

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_TurnToTargetCurve : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* m_CurveData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_TurnSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_StartValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EndValue;
    
public:
    UTresAnimNotifyState_TurnToTargetCurve();
};

