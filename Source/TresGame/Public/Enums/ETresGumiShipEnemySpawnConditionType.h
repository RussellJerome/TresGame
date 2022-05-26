#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipEnemySpawnConditionType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipEnemySpawnConditionType : uint8 {
    TRIGGER_COLLISION_OVERLAP,
    OTHER_ENEMY_GROUPS_WIPE_OUT,
    OTHER_ENEMY_GROUPS_DISAPPEAR,
    OTHER_ENEMY_GROUPS_NON_EXISTS,
    EXTERNAL_NOTIFICATION,
    SPAWN_CONDITION_TYPE_MAX UMETA(Hidden),
};

