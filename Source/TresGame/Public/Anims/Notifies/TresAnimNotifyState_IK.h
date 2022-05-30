#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_IK.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_IK : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_StartInterpolationTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EndInterpolationTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_TargetAlpha;
    
public:
    UTresAnimNotifyState_IK();
};

