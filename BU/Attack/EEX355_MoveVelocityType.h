#pragma once
#include "CoreMinimal.h"
#include "EEX355_MoveVelocityType.generated.h"

UENUM(BlueprintType)
enum EEX355_MoveVelocityType {
    EEX355_MoveVelocityType_Constant,
    EEX355_MoveVelocityType_EaseIn,
    EEX355_MoveVelocityType_EaseOut,
    EEX355_MoveVelocityType_EaseInOut,
    EEX355_MoveVelocityType_Max,
};

