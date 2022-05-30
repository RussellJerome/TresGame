#pragma once
#include "CoreMinimal.h"
#include "EEX359_SpawnDirType.generated.h"

UENUM(BlueprintType)
enum EEX359_SpawnDirType {
    EEX359_SpawnDirType_Self,
    EEX359_SpawnDirType_Target,
    EEX359_SpawnDirType_ToTarget,
    EEX359_SpawnDirType_Camera,
    EEX359_SpawnDirType_ProjToTarget,
    EEX359_SpawnDirType_Max,
};

