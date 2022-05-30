#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ETresAnimNotifyBpEventID.h"
#include "TresAnimNotifyState_BpEvent.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_BpEvent : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresAnimNotifyBpEventID> m_EventID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_Param;
    
public:
    UTresAnimNotifyState_BpEvent();
};

