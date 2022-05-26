#pragma once
#include "CoreMinimal.h"
#include "EEX359_SpawnLocType.generated.h"

UENUM(BlueprintType)
enum EEX359_SpawnLocType {
    EEX359_SpawnLocType_Self,
    EEX359_SpawnLocType_Target,
    EEX359_SpawnLocType_Owner,
    EEX359_SpawnLocType_Max,
};

