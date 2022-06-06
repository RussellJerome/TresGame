#pragma once
#include "CoreMinimal.h"
#include "ETresGameMiniGameType.generated.h"

UENUM(BlueprintType)
enum class ETresGameMiniGameType : uint8 {
    NORMAL,
    TS_GIGAS_BATTLE,
    TS_GIGAS_GAME,
    RA_FESTIVAL_DANCE,
    FZ_SNOWCURLING,
    BX_FLASHTRACER,
    BX_DARKBAYMAX_RAIL,
    BX_DARKBAYMAX_NEAR,
    CA_BP_TUTORIAL,
    CA_BOARD_ENEMYSHIP,
    CA_LUXORD_COMPE,
    CA_FD_MAELSTROM,
    HE_PUDDING,
    TS_PUDDING,
    RA_PUDDING,
    MI_PUDDING,
    FZ_PUDDING,
    BX_PUDDING,
    CA_PUDDING,
};

