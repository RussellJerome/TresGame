#pragma once
#include "CoreMinimal.h"
#include "ETresDlcChallengeScoreID.h"
#include "TresCodeMenuChallengeScoreInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresCodeMenuChallengeScoreInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresDlcChallengeScoreID m_Code;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FString> m_NameIds;
    
    TRESGAME_API FTresCodeMenuChallengeScoreInfo();
};

