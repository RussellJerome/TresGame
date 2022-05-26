#pragma once
#include "CoreMinimal.h"
#include "GUMISHIP_ENEMY625_STATUS.generated.h"

UENUM(BlueprintType)
enum class GUMISHIP_ENEMY625_STATUS : uint8 {
    E_GM625_LATENT,
    E_GM625_EMERGENCE,
    E_GM625_MAX UMETA(Hidden),
};

