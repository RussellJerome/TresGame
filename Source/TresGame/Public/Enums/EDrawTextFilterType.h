#pragma once
#include "CoreMinimal.h"
#include "EDrawTextFilterType.generated.h"

UENUM(BlueprintType)
enum EDrawTextFilterType {
    EDrawTextFilterType_Blur,
    EDrawTextFilterType_Glow,
    EDrawTextFilterType_DropShadow,
};

