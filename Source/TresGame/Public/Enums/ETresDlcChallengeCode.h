#pragma once
#include "CoreMinimal.h"
#include "ETresDlcChallengeCode.generated.h"

UENUM(BlueprintType)
enum class ETresDlcChallengeCode : uint8 {
    LevelOne,
    GuardZero,
    APLimit,
    HPCurse,
    MPCurse,
    BanCure,
    BanBattleItem,
    BanFormChange,
    BanShootflow,
    BanAttractionFlow,
    BanFriendLink,
    BanDisneyMagic,
    BanMogMedal,
    _CodeMax,
    _Max = 0x18,
};

