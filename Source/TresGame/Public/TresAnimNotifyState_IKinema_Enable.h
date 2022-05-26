#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_IKinema_Enable.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_IKinema_Enable : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_On;
    
    UPROPERTY(EditAnywhere)
    bool m_Force;
    
    UTresAnimNotifyState_IKinema_Enable();
};

