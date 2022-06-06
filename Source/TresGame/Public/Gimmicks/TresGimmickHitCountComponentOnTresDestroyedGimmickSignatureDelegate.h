#pragma once
#include "CoreMinimal.h"
#include "TresGimmickHitCountComponentOnTresDestroyedGimmickSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGimmickHitCountComponentOnTresDestroyedGimmickSignature, AActor*, DamageCauser);

