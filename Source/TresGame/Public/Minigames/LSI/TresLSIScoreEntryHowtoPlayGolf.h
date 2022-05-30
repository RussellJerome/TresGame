#pragma once
#include "CoreMinimal.h"
#include "ETresLSIHowtoPlayGolfMode.h"
#include "TresLSIScoreEntryHowtoPlayGolf.generated.h"

USTRUCT(BlueprintType)
struct FTresLSIScoreEntryHowtoPlayGolf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    ETresLSIHowtoPlayGolfMode mode;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Score;
    
    TRESGAME_API FTresLSIScoreEntryHowtoPlayGolf();
};

