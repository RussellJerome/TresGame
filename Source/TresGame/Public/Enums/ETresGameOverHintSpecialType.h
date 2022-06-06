#pragma once
#include "CoreMinimal.h"
#include "ETresGameOverHintSpecialType.generated.h"

UENUM(BlueprintType)
enum class ETresGameOverHintSpecialType : uint8 {
    None,
    KilledByGimmick,
    DieInUnderwater,
    DieInSpecialRailSlide,
    OutsideSetting,
    RestrictWeapon,
    DeathSentence,
    Max,
};

