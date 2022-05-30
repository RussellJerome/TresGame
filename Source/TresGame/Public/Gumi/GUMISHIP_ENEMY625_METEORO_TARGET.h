#pragma once
#include "CoreMinimal.h"
#include "GUMISHIP_ENEMY625_METEORO_TARGET.generated.h"

UENUM(BlueprintType)
enum class GUMISHIP_ENEMY625_METEORO_TARGET : uint8 {
    E_GM625_TARGET_METEORO1,
    E_GM625_TARGET_METEORO2,
    E_GM625_TARGET_METEORO3,
    E_GM625_TARGET_MAX UMETA(Hidden),
};

