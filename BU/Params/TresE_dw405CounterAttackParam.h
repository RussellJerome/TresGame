#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresE_dw405CounterAttackParam.generated.h"

class UTresAttackDefinitionBase;

USTRUCT(BlueprintType)
struct FTresE_dw405CounterAttackParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresAttackDefinitionBase> AttackDefinitionClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ActionIndex;
    
    TRESGAME_API FTresE_dw405CounterAttackParam();
};

