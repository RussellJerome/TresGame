#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex761_BattleAreaAppearTiming.generated.h"

UENUM(BlueprintType)
namespace ETresEnemy_e_ex761_BattleAreaAppearTiming {
    enum Type {
        BeginOverlap,
        EndOverlap,
        Max,
        ETresEnemy_e_ex761_MAX UMETA(Hidden),
    };
}

