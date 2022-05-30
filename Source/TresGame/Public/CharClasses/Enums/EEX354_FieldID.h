#pragma once
#include "CoreMinimal.h"
#include "EEX354_FieldID.generated.h"

UENUM(BlueprintType)
enum EEX354_FieldID {
    EEX354_FieldID_Standard,
    EEX354_FieldID_Narrow,
    EEX354_FieldID_Doughnut,
    EEX354_FieldID_Max,
};

