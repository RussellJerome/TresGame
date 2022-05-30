#pragma once
#include "CoreMinimal.h"
#include "EEX354_CommonAction.generated.h"

UENUM(BlueprintType)
enum EEX354_CommonAction {
    EEX354_CommonAction_ChangeField_Standard,
    EEX354_CommonAction_ChangeField_Narrow,
    EEX354_CommonAction_ChangeField_Doughnut,
    EEX354_CommonAction_FinishQuickBattle,
    EEX354_CommonAction_BodyNoReaction,
    EEX354_CommonAction_NoAppearOnRevengeWarp,
    EEX354_CommonAction_ResetBodyReaction,
};

