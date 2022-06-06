#pragma once
#include "CoreMinimal.h"
#include "ETresSaveLevel.generated.h"

UENUM(BlueprintType)
namespace ETresSaveLevel {
    enum Type {
        Visible,
        Load,
        Max,
    };
}

