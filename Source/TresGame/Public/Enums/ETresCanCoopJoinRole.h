#pragma once
#include "CoreMinimal.h"
#include "ETresCanCoopJoinRole.generated.h"

UENUM(BlueprintType)
enum class ETresCanCoopJoinRole : uint8 {
    Leader,
    Follower,
    LeaderOrFollower,
};

