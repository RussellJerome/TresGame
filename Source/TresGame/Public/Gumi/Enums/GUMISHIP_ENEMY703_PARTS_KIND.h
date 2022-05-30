#pragma once
#include "CoreMinimal.h"
#include "GUMISHIP_ENEMY703_PARTS_KIND.generated.h"

UENUM(BlueprintType)
enum class GUMISHIP_ENEMY703_PARTS_KIND : uint8 {
    E_GM703_PARTS_SHIELD,
    E_GM703_PARTS_PETAL,
    E_GM703_PARTS_MAX UMETA(Hidden),
};

