#pragma once
#include "CoreMinimal.h"
#include "TresSpawnActorData.h"
#include "TresSpawnRuleChildGenerator.h"
#include "TresSpawnActorDataForGenerator.generated.h"

USTRUCT(BlueprintType)
struct FTresSpawnActorDataForGenerator : public FTresSpawnActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTresSpawnRuleChildGenerator ChildParam;
    
    TRESGAME_API FTresSpawnActorDataForGenerator();
};

