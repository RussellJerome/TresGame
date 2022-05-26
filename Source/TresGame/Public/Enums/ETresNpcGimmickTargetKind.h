#pragma once
#include "CoreMinimal.h"
#include "ETresNpcGimmickTargetKind.generated.h"

UENUM(BlueprintType)
enum ETresNpcGimmickTargetKind {
    TRES_NPC_GTK_RAND,
    TRES_NPC_GTK_NEAR,
    TRES_NPC_GTK_PLAYER_NEAR,
    TRES_NPC_GTK_TIME,
    TRES_NPC_GTK_MAX UMETA(Hidden),
};

