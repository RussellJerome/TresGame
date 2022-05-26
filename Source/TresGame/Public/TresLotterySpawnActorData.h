#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresSpawnRuleChildGenerator.h"
#include "TresLotterySpawnActorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresLotterySpawnActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TSubclassOf<AActor> SpawnClass;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    int32 Power;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTresSpawnRuleChildGenerator ChildGeneratorRule;
    
    TRESGAME_API FTresLotterySpawnActorData();
};

