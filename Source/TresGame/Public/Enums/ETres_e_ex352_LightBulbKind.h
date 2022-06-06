#pragma once
#include "CoreMinimal.h"
#include "ETres_e_ex352_LightBulbKind.generated.h"

UENUM(BlueprintType)
enum class ETres_e_ex352_LightBulbKind : uint8 {
    LightBulbKind_Homing,
    LightBulbKind_Rotation,
    LightBulbKind_Scattering,
    LightBulbKind_MAX UMETA(Hidden),
};

