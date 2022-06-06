#pragma once
#include "CoreMinimal.h"
#include "EGimmickKG_UnionCrossEnemy_MoveMode.generated.h"

UENUM(BlueprintType)
enum class EGimmickKG_UnionCrossEnemy_MoveMode : uint8 {
    Progress,
    Direction,
    Straight,
    BlowUp,
    EGimmickKG_UnionCrossEnemy_MAX UMETA(Hidden),
};

