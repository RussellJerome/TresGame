#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx701BodyCollisionType.generated.h"

UENUM(BlueprintType)
enum ETresEnemyEx701BodyCollisionType {
    TRES_ENEMY_EX701_BODYCOLLISIONTYPE_DFAULT,
    TRES_ENEMY_EX701_BODYCOLLISIONTYPE_RUSH,
    TRES_ENEMY_EX701_BODYCOLLISIONTYPE_SHOT,
    TRES_ENEMY_EX701_BODYCOLLISIONTYPE_MAX UMETA(Hidden),
};

