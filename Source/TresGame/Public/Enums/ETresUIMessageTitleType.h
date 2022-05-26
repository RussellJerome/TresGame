#pragma once
#include "CoreMinimal.h"
#include "ETresUIMessageTitleType.generated.h"

UENUM(BlueprintType)
enum ETresUIMessageTitleType {
    MESSAGE_TITLE_TYPE_NONE,
    MESSAGE_TITLE_TYPE_INFORMATION,
    MESSAGE_TITLE_TYPE_QUESTION,
    MESSAGE_TITLE_TYPE_MAX UMETA(Hidden),
};

