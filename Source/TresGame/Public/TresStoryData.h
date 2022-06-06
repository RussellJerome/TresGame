#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresStoryEpisodeData.h"
#include "ETresUIDataVersion.h"
#include "TresStoryData.generated.h"

USTRUCT()
struct FTresStoryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString WorldNameTextID;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresStoryEpisodeData> EpisodeData;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresStoryData();
};

