#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresDamageInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickTakeDamageSignatureDelegate.generated.h"

class AController;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FTresGimmickTakeDamageSignature, float, DamagePoint, AController*, InstigatedBy, const FHitResult&, HitInfo, const FTresDamageInfo&, DamageInfo, FVector, ShotFromDirection, AActor*, DamageCauser);

