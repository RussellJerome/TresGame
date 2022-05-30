#pragma once
#include "CoreMinimal.h"
#include "ETresSavePointDispType.h"
#include "TresChangeRailSlideExStartActorEffectSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresChangeRailSlideExStartActorEffectSignature, ETresSavePointDispType, InDispType);

