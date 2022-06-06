#pragma once
#include "CoreMinimal.h"
#include "EFollowActorState.generated.h"

UENUM(BlueprintType)
enum class EFollowActorState : uint8 {
    STATE_NONE,
    STATE_WAIT,
    STATE_FOLLOW,
    STATE_TAKE_DISTANCE,
    STATE_ESCAPE,
    STATE_RETURN,
    STATE_DESTINATION_MOVE,
    STATE_SPLINE_MOVE,
    STATE_MAX UMETA(Hidden),
};

