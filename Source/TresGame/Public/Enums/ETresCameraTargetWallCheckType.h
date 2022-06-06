#pragma once
#include "CoreMinimal.h"
#include "ETresCameraTargetWallCheckType.generated.h"

UENUM(BlueprintType)
enum ETresCameraTargetWallCheckType {
    TCTWallCheckType_Normal,
    TCTWallCheckType_BasePos,
    TCTWallCheckType_TargetPos,
    TCTWallCheckType_TargetBoneName,
    TCTWallCheckType_AccompanyPawnSafetyPos,
    TCTWallCheckType_TargetRoot,
    TCTWallCheckType_MAX UMETA(Hidden),
};

