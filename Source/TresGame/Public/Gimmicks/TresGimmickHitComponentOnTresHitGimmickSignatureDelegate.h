#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresGimmickHitComponentOnTresHitGimmickSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresGimmickHitComponentOnTresHitGimmickSignature, const FHitResult&, HitInfo, AActor*, HitCauser);

