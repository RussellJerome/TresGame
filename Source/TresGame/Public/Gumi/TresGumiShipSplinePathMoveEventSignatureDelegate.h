#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipSplineEventType.h"
#include "TresGumiShipSplinePathMoveEventSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipSplinePathMoveEventSignature, ETresGumiShipSplineEventType, EventType);

