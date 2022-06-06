#pragma once
#include "CoreMinimal.h"
#include "ETresDlcCheatCode.generated.h"

UENUM(BlueprintType)
enum class ETresDlcCheatCode : uint8 {
    PowerWorld,
    APFree,
    AutoGuard,
    HPRegenerate,
    MPRegenerate,
    FormRegenerate,
    FocusRegenerate,
    AttractionFever,
    FriendLinkFever,
    LinkExtend,
    RageFever,
    ShopDeflation,
    BattleVictory,
    PerfectCooking,
    GumiCheat,
    _CodeMax,
    _Max = 0x20,
};

