#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresGimmickHitCountComponentOnTresTakeDamageGimmickSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresGimmickHitCountComponentOnTresTakeDamageGimmickSignature, const FHitResult&, HitInfo, AActor*, DamageCauser);

