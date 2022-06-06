#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresSpawnRuleChildGenerator.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresSpawnRuleChildGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> GeneratedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Num;
    
    TRESGAME_API FTresSpawnRuleChildGenerator();
};

