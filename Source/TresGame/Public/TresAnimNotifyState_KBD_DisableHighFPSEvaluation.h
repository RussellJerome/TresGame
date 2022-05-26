#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_KBD_DisableHighFPSEvaluation.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_KBD_DisableHighFPSEvaluation : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bApplyToChildren;
    
    UTresAnimNotifyState_KBD_DisableHighFPSEvaluation();
};

