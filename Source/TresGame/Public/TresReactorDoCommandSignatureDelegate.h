#pragma once
#include "CoreMinimal.h"
#include "ETresCommandKind.h"
#include "TresReactorDoCommandSignatureDelegate.generated.h"

class ATresCharPawnBase;
class UTresReactorComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresReactorDoCommandSignature, ATresCharPawnBase*, CommandCauser, TEnumAsByte<ETresCommandKind>, CommandID, UTresReactorComponent*, ReactorComponent);

