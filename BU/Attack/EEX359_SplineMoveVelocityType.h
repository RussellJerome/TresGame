#pragma once
#include "CoreMinimal.h"
#include "EEX359_SplineMoveVelocityType.generated.h"

UENUM(BlueprintType)
enum EEX359_SplineMoveVelocityType {
    EEX359_SplineMoveVelocityType_Constant,
    EEX359_SplineMoveVelocityType_EaseIn,
    EEX359_SplineMoveVelocityType_EaseOut,
    EEX359_SplineMoveVelocityType_EaseInOut,
    EEX359_SplineMoveVelocityType_Max,
};

