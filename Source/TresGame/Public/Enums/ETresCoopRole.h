#pragma once
#include "CoreMinimal.h"
#include "ETresCoopRole.generated.h"

UENUM(BlueprintType)
enum class ETresCoopRole : uint8 {
    Unknown,
    Leader,
    Follower,
};

