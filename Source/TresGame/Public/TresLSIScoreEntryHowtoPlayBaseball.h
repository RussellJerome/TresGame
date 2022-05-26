#pragma once
#include "CoreMinimal.h"
#include "ETresLSIHowtoPlayBaseballMode.h"
#include "TresLSIScoreEntryHowtoPlayBaseball.generated.h"

USTRUCT(BlueprintType)
struct FTresLSIScoreEntryHowtoPlayBaseball {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    ETresLSIHowtoPlayBaseballMode mode;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Score;
    
    TRESGAME_API FTresLSIScoreEntryHowtoPlayBaseball();
};

