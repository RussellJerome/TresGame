#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_Alpha.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_Alpha : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_StartRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EndRate;
    
public:
    UTresAnimNotifyState_Alpha();
};

