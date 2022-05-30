#pragma once
#include "CoreMinimal.h"
#include "FTresGumiShipRailSlideRailType.generated.h"

UENUM(BlueprintType)
enum class FTresGumiShipRailSlideRailType : uint8 {
    RSR_ROAD_TYPE,
    RSR_BOSS_TRACKING_TYPE,
    RSR_NORMAL_TRACKING_TYPE,
    RSR_TREASURE_TYPE,
    RSR_MAX UMETA(Hidden),
};

