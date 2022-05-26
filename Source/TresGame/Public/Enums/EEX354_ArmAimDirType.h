#pragma once
#include "CoreMinimal.h"
#include "EEX354_ArmAimDirType.generated.h"

UENUM(BlueprintType)
enum class EEX354_ArmAimDirType : uint8 {
    EEX354_ArmAimDirType_ToTarget,
    EEX354_ArmAimDirType_OwnerToSelf,
    EEX354_ArmAimDirType_OwnerToTarget,
    EEX354_ArmAimDirType_Max,
};

