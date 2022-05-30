#pragma once
#include "CoreMinimal.h"
#include "RemyCookingGameState.generated.h"

UENUM(BlueprintType)
enum RemyCookingGameState {
    RemyCookingPrepare,
    RemyCookingTitle,
    RemyCookingTutorial,
    RemyCookingCountDown,
    RemyCookingMain,
    RemyCookingResult,
    RemyCookingPerformance,
    RemyCookingEnd,
    RemyCookingRetry,
};

