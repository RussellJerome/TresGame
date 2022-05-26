#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresLevelEntitySequenceCondition.generated.h"

UCLASS(Abstract, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_MonitoringGroup;
    
    UTresLevelEntitySequenceCondition();
};

