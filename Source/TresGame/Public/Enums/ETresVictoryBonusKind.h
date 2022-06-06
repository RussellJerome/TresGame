#pragma once
#include "CoreMinimal.h"
#include "ETresVictoryBonusKind.generated.h"

UENUM(BlueprintType)
enum class ETresVictoryBonusKind : uint8 {
    NONE,
    HP_UP3,
    HP_UP5,
    HP_UP10,
    HP_UP15,
    HP_UP30,
    _RESERVE6,
    _RESERVE7,
    MP_UP3,
    MP_UP5,
    MP_UP10,
    MP_UP20,
    _RESERVE12,
    _RESERVE13,
    _RESERVE14,
    _RESERVE15,
    DEF_SLOT_UP1,
    ACC_SLOT_UP1,
    ITEM_SLOT_UP1,
    _RESERVE19,
    _RESERVE20,
    _RESERVE21,
    _RESERVE22,
    _RESERVE23,
    MELEM_FIRE,
    MELEM_BLIZZARD,
    MELEM_THUNDER,
    MELEM_WATER,
    MELEM_AERO,
    MELEM_CURE,
    _RESERVE30,
    _RESERVE31,
    TYPE_MAX UMETA(Hidden),
};

