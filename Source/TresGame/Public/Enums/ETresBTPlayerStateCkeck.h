#pragma once
#include "CoreMinimal.h"
#include "ETresBTPlayerStateCkeck.generated.h"

UENUM(BlueprintType)
enum class ETresBTPlayerStateCkeck : uint8 {
    FlyingMissionNormal,
    FlyingMissionRideEx026,
    FlyingMissionRideEx021,
    ShootingRide,
    RailSlide,
    Max,
};

