#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_TimingRate.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_TimingRate : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_StartRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EndRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_Param;
    
public:
    UTresAnimNotifyState_TimingRate();
};

