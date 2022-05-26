#pragma once
#include "CoreMinimal.h"
#include "ETresPauseMenuType.generated.h"

UENUM(BlueprintType)
enum ETresPauseMenuType {
    ETresPauseMenuType_Normal,
    ETresPauseMenuType_EventSkip,
    ETresPauseMenuType_EventSkipButDisallow,
    ETresPauseMenuType_MiniGame,
    ETresPauseMenuType_NoRetryMiniGame,
    ETresPauseMenuType_Tutorial,
};

