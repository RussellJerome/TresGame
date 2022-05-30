#pragma once
#include "CoreMinimal.h"
#include "EBX901_ComboType.generated.h"

UENUM(BlueprintType)
enum EBX901_ComboType {
    EBX901_Combo_Claw,
    EBX901_Combo_Punch,
    EBX901_Combo_Chop,
    EBX901_Combo_MAX UMETA(Hidden),
};

