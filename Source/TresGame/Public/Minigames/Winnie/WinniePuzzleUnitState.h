#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleUnitState.generated.h"

UENUM(BlueprintType)
enum WinniePuzzleUnitState {
    Unit_State_Idle,
    Unit_State_Roll,
    Unit_State_Roll_End,
    Unit_State_Grow,
    Unit_State_Pool,
    Unit_State_Particle_Destroyed,
    Unit_State_None = 0xFF,
    Unit_State_MAX UMETA(Hidden),
};

