#pragma once
#include "CoreMinimal.h"
#include "EEX354_ArmSpawnPosAdjustType.generated.h"

UENUM(BlueprintType)
enum class EEX354_ArmSpawnPosAdjustType : uint8 {
    EEX354_ArmSpawnPosAdjustType_Pos,
    EEX354_ArmSpawnPosAdjustType_Dir,
    EEX354_ArmSpawnPosAdjustType_Max,
};

