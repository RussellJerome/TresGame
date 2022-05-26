#pragma once
#include "CoreMinimal.h"
#include "TresLockonTargetDoLockSignatureDelegate.generated.h"

class UTresLockonTargetComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresLockonTargetDoLockSignature, bool, bTargeted, UTresLockonTargetComponent*, Component);

