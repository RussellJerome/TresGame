#pragma once
#include "CoreMinimal.h"
#include "TresGimmickOnStopGimmickForPlanSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGimmickOnStopGimmickForPlanSignature, bool, PlayAnimation);

