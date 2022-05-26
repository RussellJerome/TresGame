#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipEnemyBattleFinishType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipEnemyBattleFinishType : uint8 {
    BATTLE_QUIT_SELECT,
    BATTLE_RETRY_SELECT,
    RETURN_FIELD_QUEST_SELECT,
    BATTLE_FINISH_TYPE_MAX UMETA(Hidden),
};

