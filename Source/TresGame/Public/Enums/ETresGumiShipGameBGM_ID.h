#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipGameBGM_ID.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipGameBGM_ID : uint8 {
    FIELD_BGM,
    NORMAL_BATTLE_BGM,
    BOSS_BATTLE_BGM,
    BATTLE_RESULT_BGM,
    E_GM623_BATTLE_BGM,
    E_GM628_BATTLE_BGM,
    ETresGumiShipGameBGM_MAX UMETA(Hidden),
};

