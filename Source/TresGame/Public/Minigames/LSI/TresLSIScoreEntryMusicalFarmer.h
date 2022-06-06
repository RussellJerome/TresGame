#pragma once
#include "CoreMinimal.h"
#include "ETresLSIMusicFarmerMode.h"
#include "TresLSIScoreEntryMusicalFarmer.generated.h"

USTRUCT(BlueprintType)
struct FTresLSIScoreEntryMusicalFarmer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    ETresLSIMusicFarmerMode mode;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Score;
    
    TRESGAME_API FTresLSIScoreEntryMusicalFarmer();
};

