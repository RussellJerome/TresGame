#pragma once
#include "CoreMinimal.h"
#include "ETresGimmickDistanceBetweenPlayer.generated.h"

UENUM(BlueprintType)
enum class ETresGimmickDistanceBetweenPlayer : uint8 {
    None,
    Near,
    Middle,
    Far,
};

