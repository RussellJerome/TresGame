#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_LookAtParam.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_LookAtParam : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ParamA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_StartInterpolationTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EndInterpolationTime;
    
public:
    UTresAnimNotifyState_LookAtParam();
};

