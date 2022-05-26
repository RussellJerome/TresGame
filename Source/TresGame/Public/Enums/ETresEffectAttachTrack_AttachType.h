#pragma once
#include "CoreMinimal.h"
#include "ETresEffectAttachTrack_AttachType.generated.h"

UENUM(BlueprintType)
enum ETresEffectAttachTrack_AttachType {
    ETresEffectAttachTrack_AttachType_Attach,
    ETresEffectAttachTrack_AttachType_End,
    ETresEffectAttachTrack_AttachType_CommonSet_ENEMY_APPEAR0,
    ETresEffectAttachTrack_AttachType_CommonSet_ENEMY_APPEAR1,
    ETresEffectAttachTrack_AttachType_CommonSet_ENEMY_APPEAR2,
    ETresEffectAttachTrack_AttachType_CommonSet_ENEMY_DEATH0,
    ETresEffectAttachTrack_AttachType_CommonSet_ENEMYDISAPPEAR0,
};

