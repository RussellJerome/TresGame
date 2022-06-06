#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresCharMovementUpdatedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresCharMovementUpdatedSignature, float, DeltaSeconds, FVector, OldLocation, FVector, OldVelocity);

