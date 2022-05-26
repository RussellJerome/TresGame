#pragma once
#include "CoreMinimal.h"
#include "ETresNavAreaFlag.generated.h"

UENUM(BlueprintType)
namespace ETresNavAreaFlag {
    enum Type {
        Default,
        Jump,
        Fall,
        Hop,
        Rail,
        Vault,
        PowerWildOnlyTreeBranch,
        LowJump,
        WaterSurface,
        Damage,
    };
}

