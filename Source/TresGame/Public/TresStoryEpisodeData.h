#pragma once
#include "CoreMinimal.h"
#include "TresUIGameFlagText.h"
#include "TresStoryEpisodeData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTresStoryEpisodeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagText EpisodeText;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* IconAsset;
    
    TRESGAME_API FTresStoryEpisodeData();
};

