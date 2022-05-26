#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipEnemyBattleStartType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipEnemyBattleStartType : uint8 {
    ENEMY_SYMBOL_ENCOUNTER,
    BOSS_ENEMY_BATTLE_TRIGGER,
    FIELD_TYPE_ENEMY_BATTLE_TRIGGER,
    BATTLE_START_TYPE_MAX UMETA(Hidden),
};

