#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceCondition.h"
#include "TresLevelEntitySequenceCondition_Or.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceCondition_Or : public UTresLevelEntitySequenceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UTresLevelEntitySequenceCondition*> m_Conditions;
    
    UTresLevelEntitySequenceCondition_Or();
};

