#pragma once
#include "CoreMinimal.h"
#include "ETresDlcCheatAchievementID.generated.h"

UENUM(BlueprintType)
enum class ETresDlcCheatAchievementID : uint8 {
    RiskeyChallenge,
    GlideChallenge,
    GumiSGeistChallenge,
    AerialChallenge,
    GigasChallenge,
    BowlingChallenge,
    FreezeChallenge,
    RageChallenge,
    LinkChallenge,
    _AllClearCheck,
    _Max = 0x40,
};

