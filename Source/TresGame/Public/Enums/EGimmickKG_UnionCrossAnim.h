#pragma once
#include "CoreMinimal.h"
#include "EGimmickKG_UnionCrossAnim.generated.h"

UENUM(BlueprintType)
enum EGimmickKG_UnionCrossAnim {
    EGimmickKG_UnionCrossAnim_Invalid,
    EGimmickKG_UnionCrossAnim_Idle,
    EGimmickKG_UnionCrossAnim_Attack,
    EGimmickKG_UnionCrossAnim_Finish,
    EGimmickKG_UnionCrossAnim_DamageStart,
    EGimmickKG_UnionCrossAnim_DamageEnd,
};

