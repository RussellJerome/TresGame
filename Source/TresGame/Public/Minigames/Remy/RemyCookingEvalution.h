#pragma once
#include "CoreMinimal.h"
#include "RemyCookingEvalution.generated.h"

UENUM(BlueprintType)
enum RemyCookingEvalution {
    RemyCookingEvalutionNothing,
    RemyCookingEvalutionTooLittle,
    RemyCookingEvalutionSuccess,
    RemyCookingEvalutionGreatSuccess,
    RemyCookingEvalutionTooMany,
    RemyCookingEvalutionTooFast,
    RemyCookingEvalutionTooSlow,
};

