#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADSoundOutputPort.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADSoundOutputPort {
    enum Type {
        AUTO,
        MAIN,
        RESTRICTED,
        PAD1,
        MAIN_PAD1,
    };
}

