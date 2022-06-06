#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipBonusType.generated.h"

UENUM(BlueprintType)
enum ETresGumiShipBonusType {
    BONUS_DEFEAT_ENEMY,
    BONUS_DESTROY_PARTS,
    BONUS_DEFEAT_GROUP,
    BONUS_MAX UMETA(Hidden),
};

