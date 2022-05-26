#pragma once
#include "CoreMinimal.h"
#include "ETresAtkCollLocationAttachType.generated.h"

UENUM(BlueprintType)
enum class ETresAtkCollLocationAttachType : uint8 {
    NORMAL,
    OWNER_ATTACHED_MESH,
    WORLD,
};

