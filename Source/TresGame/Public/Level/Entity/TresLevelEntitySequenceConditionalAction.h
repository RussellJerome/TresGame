#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceConditionalAction.generated.h"

class UTresLevelEntitySequenceCondition;
class UTresLevelEntitySequenceAction;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresLevelEntitySequenceConditionalAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced, NoClear)
    UTresLevelEntitySequenceCondition* m_Condition;
    
    UPROPERTY(EditAnywhere, Instanced, NoClear)
    UTresLevelEntitySequenceAction* m_Action;
    
    UPROPERTY(EditAnywhere)
    bool m_Abandonable;
    
    UPROPERTY(EditAnywhere, Instanced)
    UTresLevelEntitySequenceCondition* m_AbandonCondition;
    
    FTresLevelEntitySequenceConditionalAction();
};

