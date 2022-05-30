#pragma once
#include "CoreMinimal.h"
#include "TresDamageInfo.h"
#include "TresGimmickKilledCharSignatureDelegate.generated.h"

class ATresGimmickActor;
class ATresPawnBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGimmickKilledCharSignature, ATresGimmickActor*, AttackCauser, ATresPawnBase*, KilledPawn, const FTresDamageInfo&, DamageInfo);

