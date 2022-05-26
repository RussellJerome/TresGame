#pragma once
#include "CoreMinimal.h"
#include "ETresCommandKind.h"
#include "TresGimmickDoCommandSignatureDelegate.generated.h"

class ATresCharPawnBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresGimmickDoCommandSignature, ATresCharPawnBase*, InCommandCauser, TEnumAsByte<ETresCommandKind>, InCommandID);

