#pragma once
#include "CoreMinimal.h"
#include "ETresSoundModes.generated.h"

UENUM(BlueprintType)
namespace ETresSoundModes {
    enum Type {
        BLACKOUT,
        PAUSE,
        SLOW,
        PLAYER_DEAD,
        BOSS_DEAD,
        THANKYOU_FOR_PLAYING,
        EVENT_SKIP_FADING,
        MOVIE,
    };
}

