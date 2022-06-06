#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADBGMControlTypes.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADBGMControlTypes {
    enum Type {
        NONE,
        PLAY,
        STOP,
        RESET,
        SETSILENT,
        SETSECTION,
        SETMODE,
        SETPATHPLAY,
        READY,
    };
}

