#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleVoice.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleVoice : uint8 {
    PlayerGameStart,
    PlayerShot,
    PlayerStrike,
    PlayerHarvestStart,
    PlayerCharacterBonusReply,
    PlayerAdditionalInvocation,
    PlayerClearOrFinish,
    RabbitStrike,
    RabbitChainOccurred,
    RabbitHarvestStart,
    RabbitHarvestedNormal,
    RabbitHarvestedGood,
    RabbitHarvestHint,
    RabbitBeforeHarvest,
    PoohHungry,
    PoohCatchHoneyPot,
    PoohEatingHoney,
    PoohIdle,
    PoohClearOrFinish,
    PoohLevelUp,
    TiggerInvokable,
    TiggerInvoke,
    TiggerInvokableRepeat,
    LumpyInvokable,
    LumpyInvoke,
    LumpyInvokableRepeat,
    GopherInvokable,
    GopherInvoke,
    GopherInvokableRepeat,
    Num,
    None = 0xFF,
};

