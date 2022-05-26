#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_KBD_ChangeHighFpsEvaluationSimulationDefaultDeltaSeconds.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_KBD_ChangeHighFpsEvaluationSimulationDefaultDeltaSeconds : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_BeginSimulationDefaultDeltaSeconds;
    
    UPROPERTY(EditAnywhere)
    float m_EndSimulationDefaultDeltaSeconds;
    
    UPROPERTY(EditAnywhere)
    bool m_bApplyToChildren;
    
    UTresAnimNotifyState_KBD_ChangeHighFpsEvaluationSimulationDefaultDeltaSeconds();
};

