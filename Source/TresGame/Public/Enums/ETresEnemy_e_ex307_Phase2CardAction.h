#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex307_Phase2CardAction.generated.h"

UENUM(BlueprintType)
namespace ETresEnemy_e_ex307_Phase2CardAction {
    enum Type {
        Shake,
        VerticalSway,
        HorizontalSway,
        Shine,
        Max,
        ETresEnemy_e_ex307_MAX UMETA(Hidden),
    };
}

