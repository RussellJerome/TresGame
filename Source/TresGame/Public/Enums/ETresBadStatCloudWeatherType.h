#pragma once
#include "CoreMinimal.h"
#include "ETresBadStatCloudWeatherType.generated.h"

UENUM(BlueprintType)
enum class ETresBadStatCloudWeatherType : uint8 {
    TRES_BS_WEATHER_TYPE_NONE,
    TRES_BS_WEATHER_TYPE_CLOUD,
    TRES_BS_WEATHER_TYPE_LIGHT_RAIN,
    TRES_BS_WEATHER_TYPE_HEAVY_RAIN,
    TRES_BS_WEATHER_TYPE_MAX UMETA(Hidden),
};

