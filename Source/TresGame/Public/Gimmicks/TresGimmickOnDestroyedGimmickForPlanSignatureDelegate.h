#pragma once
#include "CoreMinimal.h"
#include "TresGimmickOnDestroyedGimmickForPlanSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGimmickOnDestroyedGimmickForPlanSignature, bool, PlayAnimation);

