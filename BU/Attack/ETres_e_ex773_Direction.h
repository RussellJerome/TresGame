#pragma once
#include "CoreMinimal.h"
#include "ETres_e_ex773_Direction.generated.h"

UENUM()
enum class ETres_e_ex773_Direction : int32 {
    None,
    Front,
    Right,
    Left,
    Back,
    ETres_e_ex773_MAX UMETA(Hidden),
};

