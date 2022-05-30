#pragma once
#include "CoreMinimal.h"
#include "TresSpawnActorData.h"
#include "TresSpawnPrizeData.generated.h"

USTRUCT(BlueprintType)
struct FTresSpawnPrizeData : public FTresSpawnActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    float OverrideSphereRadius_;
    
    TRESGAME_API FTresSpawnPrizeData();
};

