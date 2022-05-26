#pragma once
#include "CoreMinimal.h"
#include "ETresTeam.generated.h"

UENUM(BlueprintType)
namespace ETresTeam {
    enum Type {
        Player,
        FriendNpc,
        Enemy = 0x20,
        Heartless,
        Nobody,
        Unverse,
        Neutral = 0xA0,
        CityNpc,
        Unknown = 0xFE,
    };
}

