#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_TurnToTarget.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_TurnToTarget : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_Index;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_TurnSpeed;
    
public:
    UTresAnimNotifyState_TurnToTarget();
};

