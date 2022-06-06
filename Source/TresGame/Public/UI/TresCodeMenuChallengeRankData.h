#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresDlcChallengeRank.h"
#include "TresCodeMenuChallengeRankData.generated.h"

class UTexture;

USTRUCT()
struct FTresCodeMenuChallengeRankData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresDlcChallengeRank m_Code;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* m_IconAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_RankName;
    
    TRESGAME_API FTresCodeMenuChallengeRankData();
};

