#pragma once
#include "CoreMinimal.h"
#include "ETresNpcUseItemType.generated.h"

UENUM(BlueprintType)
enum class ETresNpcUseItemType : uint8 {
    TRES_NPC_USE_ITEM_NONE,
    TRES_NPC_USE_ITEM_HP,
    TRES_NPC_USE_ITEM_MP,
    TRES_NPC_USE_ITEM_MAX UMETA(Hidden),
};

