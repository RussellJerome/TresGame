#pragma once
#include "CoreMinimal.h"
#include "PRIZE_KIND.generated.h"

UENUM(BlueprintType)
enum PRIZE_KIND {
    PRIZE_KIND_HpPrizeS,
    PRIZE_KIND_HpPrizeL,
    PRIZE_KIND_MpPrizeS,
    PRIZE_KIND_MpPrizeL,
    PRIZE_KIND_MunnyPrizeS,
    PRIZE_KIND_MunnyPrizeM,
    PRIZE_KIND_MunnyPrizeL,
    PRIZE_KIND_FocusPrizeS,
    PRIZE_KIND_FocusPrizeL,
    PRIZE_KIND_CrabPrize,
    PRIZE_KIND_MovableCrabPrize,
    PRIZE_KIND_LightPrizeS,
    PRIZE_KIND_LightPrizeL,
    PRIZE_KIND_HealPrizeBox,
    PRIZE_KIND_MatePrizeBox,
    PRIZE_KIND_FstfPrizeBox,
    PRIZE_KIND_RarePrizeBox,
};

