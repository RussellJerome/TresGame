#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "TresBTService_GameplayFocus.generated.h"

UCLASS()
class UTresBTService_GameplayFocus : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_DelayClearFocusTime;
    
    UTresBTService_GameplayFocus();
};

