#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADCategoryVolumeLayers.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADCategoryVolumeLayers {
    enum Type {
        Debug,
        Game,
        Config,
        Menu,
        Event,
        Slow,
        Matinee,
        _MAX UMETA(Hidden),
    };
}

