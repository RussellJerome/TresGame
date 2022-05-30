#pragma once
#include "CoreMinimal.h"
#include "RemyResultAnimationType.generated.h"

UENUM(BlueprintType)
enum class RemyResultAnimationType : uint8 {
    RemyResultAnimSuccess,
    RemyResultAnimSuccessLoop,
    RemyResultAnimGreatSuccess,
    RemyResultAnimGreatSuccessLoop,
    RemyResultAnimFail,
    RemyResultAnimFailLoop,
};

