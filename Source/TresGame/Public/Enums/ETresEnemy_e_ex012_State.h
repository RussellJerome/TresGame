#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex012_State.generated.h"

UENUM(BlueprintType)
enum class ETresEnemy_e_ex012_State : uint8 {
    None,
    Appear,
    Idle,
    BeginCooperation,
    BeginMove,
    DuringMove,
    FinishMove,
    Damage,
    BeginShowerNeedle,
    DuringShowerNeedle,
    FinishShowerNeedle,
    Die,
    Other,
    ETresEnemy_e_ex012_MAX UMETA(Hidden),
};

