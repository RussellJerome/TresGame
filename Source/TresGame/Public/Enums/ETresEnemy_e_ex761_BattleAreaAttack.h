#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex761_BattleAreaAttack.generated.h"

UENUM(BlueprintType)
namespace ETresEnemy_e_ex761_BattleAreaAttack {
    enum Type {
        TripleAttack,
        WarpRushVanish,
        WarpRushFinish,
        RaiseCut,
        RotationCut,
        Shot,
        ClusterShot,
        Max,
        ETresEnemy_e_ex761_MAX UMETA(Hidden),
    };
}

