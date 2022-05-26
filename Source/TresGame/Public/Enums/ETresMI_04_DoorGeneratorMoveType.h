#pragma once
#include "CoreMinimal.h"
#include "ETresMI_04_DoorGeneratorMoveType.generated.h"

UENUM(BlueprintType)
enum class ETresMI_04_DoorGeneratorMoveType : uint8 {
    Lv0,
    Lv1,
    Lv2,
    ETresMI_04_MAX UMETA(Hidden),
};

