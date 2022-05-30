#pragma once
#include "CoreMinimal.h"
#include "TresTriggerBox.h"
#include "ETresEffectCustomAreaCode.h"
#include "TresEffectCustomAreaTriggerBox.generated.h"

UCLASS()
class ATresEffectCustomAreaTriggerBox : public ATresTriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresEffectCustomAreaCode> m_CostomEffectAreaCode;
    
    ATresEffectCustomAreaTriggerBox();
};

