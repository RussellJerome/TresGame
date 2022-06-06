#pragma once
#include "CoreMinimal.h"
#include "ETresLSIMusicFarmerMode.generated.h"

UENUM(BlueprintType)
enum class ETresLSIMusicFarmerMode : uint8 {
    GAME_A,
    GAME_B,
    GAME_MAX UMETA(Hidden),
};

