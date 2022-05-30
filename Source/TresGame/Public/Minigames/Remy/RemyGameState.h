#pragma once
#include "CoreMinimal.h"
#include "RemyGameState.generated.h"

UENUM(BlueprintType)
enum RemyGameState {
    RemyPrepare,
    RemyFirstPlay,
    RemyMenu,
    RemyMain,
    RemyCircumductionReward,
    RemyRankup,
    RemyMilestoneReward,
    RemyRetry,
    RemyFinalize,
};

