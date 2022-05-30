#pragma once
#include "CoreMinimal.h"
#include "RemyAccessMethod.generated.h"

UENUM(BlueprintType)
enum class RemyAccessMethod : uint8 {
    None,
    FromEntrance,
    FromSaveMenu,
    FromWorldMap,
};

