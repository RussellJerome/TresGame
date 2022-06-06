#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresAreaVolumeThreeParamEventDelegate.generated.h"

class ATresCharPawnBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresAreaVolumeThreeParamEvent, ATresCharPawnBase*, pTargetActor, FVector, TargetLocation, bool, IsPlayer);

