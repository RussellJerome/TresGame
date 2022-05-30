#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleUnitType.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleUnitType : uint8 {
    Carrot,
    Eggplant,
    Garlic,
    Pumpkin,
    Tomato,
    Zucchini,
    VegetableBoss,
    VegetableBossCollision,
    Apple = 0xA,
    Blackberry,
    GreenApple,
    Lemon,
    Orange,
    Pear,
    Anemone = 0x14,
    Daffodil,
    Dahlia,
    Gerbera,
    OrangePixie,
    RoofFlower,
    Honeypot,
    None = 0xFF,
};

