#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresMovementModeChangedSignatureDelegate.generated.h"

class ATresCharPawnBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresMovementModeChangedSignature, ATresCharPawnBase*, TresCharPawn, TEnumAsByte<EMovementMode>, PrevMovementMode, uint8, PreviousCustomMode);

