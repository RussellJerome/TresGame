#pragma once
#include "CoreMinimal.h"
#include "EGFxScaleMode.generated.h"

UENUM(BlueprintType)
namespace EGFxScaleMode {
    enum Type {
        NoScale,
        ShowAll,
        ExactFit,
        NoBorder,
    };
}

