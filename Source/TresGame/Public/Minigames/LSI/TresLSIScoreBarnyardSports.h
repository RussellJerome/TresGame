#pragma once
#include "CoreMinimal.h"
#include "TresLSIScoreBarnyardSports.generated.h"

USTRUCT(BlueprintType)
struct FTresLSIScoreBarnyardSports {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 the100m;
    
    UPROPERTY(BlueprintReadWrite)
    int32 hurdle;
    
    UPROPERTY(BlueprintReadWrite)
    int32 triplejump;
    
    TRESGAME_API FTresLSIScoreBarnyardSports();
};

