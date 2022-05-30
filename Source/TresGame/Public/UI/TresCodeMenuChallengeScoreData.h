#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresCodeMenuChallengeScoreInfo.h"
#include "TresUIGameFlagData.h"
#include "TresCodeMenuChallengeScoreData.generated.h"

USTRUCT()
struct FTresCodeMenuChallengeScoreData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString m_NameId;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresCodeMenuChallengeScoreInfo> m_Scores;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagData GameFlag;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_SecretOpenEnable;
    
    TRESGAME_API FTresCodeMenuChallengeScoreData();
};

