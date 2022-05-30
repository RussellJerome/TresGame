#pragma once
#include "CoreMinimal.h"
#include "TresBTTask_BlackboardValueModifierBase.h"
#include "TresBTTask_BlackboardIntValueModifier.generated.h"

UCLASS()
class UTresBTTask_BlackboardIntValueModifier : public UTresBTTask_BlackboardValueModifierBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_Value;
    
    UTresBTTask_BlackboardIntValueModifier();
};

