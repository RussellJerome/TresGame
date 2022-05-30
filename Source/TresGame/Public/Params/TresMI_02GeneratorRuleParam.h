#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresMI_02GeneratorRuleParam.generated.h"

class ATresGimmickActor;

USTRUCT(BlueprintType)
struct FTresMI_02GeneratorRuleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ATresGimmickActor> generateClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float nextLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 life;
    
    TRESGAME_API FTresMI_02GeneratorRuleParam();
};

