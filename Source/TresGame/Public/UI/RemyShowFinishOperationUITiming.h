#pragma once
#include "CoreMinimal.h"
#include "RemyShowFinishOperationUITiming.generated.h"

UENUM(BlueprintType)
enum class RemyShowFinishOperationUITiming : uint8 {
    None,
    HaveMaterial,
    OnSuccess,
};

