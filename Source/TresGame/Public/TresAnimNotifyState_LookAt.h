#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_LookAt.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_LookAt : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_StartInterpolationTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EndInterpolationTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_ReverseTrg: 1;
    
public:
    UTresAnimNotifyState_LookAt();
};

