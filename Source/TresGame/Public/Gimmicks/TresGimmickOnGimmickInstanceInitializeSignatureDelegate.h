#pragma once
#include "CoreMinimal.h"
#include "ETresGimmickInstanceManagerInstanceState.h"
#include "TresGimmickOnGimmickInstanceInitializeSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresGimmickOnGimmickInstanceInitializeSignature, ETresGimmickInstanceManagerInstanceState, State, ETresGimmickInstanceManagerInstanceState, OldState);

