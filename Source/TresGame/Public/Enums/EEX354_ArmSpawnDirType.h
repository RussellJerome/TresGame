#pragma once
#include "CoreMinimal.h"
#include "EEX354_ArmSpawnDirType.generated.h"

UENUM(BlueprintType)
enum class EEX354_ArmSpawnDirType : uint8 {
    EEX355_ArmSpawnDirType_Owner,
    EEX355_ArmSpawnDirType_Target,
    EEX355_ArmSpawnDirType_ToTarget,
    EEX355_ArmSpawnDirType_Camera,
    EEX355_ArmSpawnDirType_Max,
};

