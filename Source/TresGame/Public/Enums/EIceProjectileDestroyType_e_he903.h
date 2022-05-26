#pragma once
#include "CoreMinimal.h"
#include "EIceProjectileDestroyType_e_he903.generated.h"

UENUM(BlueprintType)
enum EIceProjectileDestroyType_e_he903 {
    DestroyType_Destroy,
    DestroyType_NoHoming,
    DestroyType_Evade,
    DestroyType_MAX UMETA(Hidden),
};

