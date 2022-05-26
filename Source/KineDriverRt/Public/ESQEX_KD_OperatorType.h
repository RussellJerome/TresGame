#pragma once
#include "CoreMinimal.h"
#include "ESQEX_KD_OperatorType.generated.h"

UENUM(BlueprintType)
enum ESQEX_KD_OperatorType {
    ESQEX_KD_OperatorType_Unknown,
    ESQEX_KD_OperatorType_ComputeSpaceBases,
    ESQEX_KD_OperatorType_Source,
    ESQEX_KD_OperatorType_SourceTranslate,
    ESQEX_KD_OperatorType_SourceRotate,
    ESQEX_KD_OperatorType_SourceOther,
    ESQEX_KD_OperatorType_TargetTranslate,
    ESQEX_KD_OperatorType_TargetScale,
    ESQEX_KD_OperatorType_TargetRotate,
    ESQEX_KD_OperatorType_TargetBendRoll,
    ESQEX_KD_OperatorType_TargetBendSTRoll,
    ESQEX_KD_OperatorType_TargetPoscns,
    ESQEX_KD_OperatorType_TargetOricns,
    ESQEX_KD_OperatorType_TargetDircns,
    ESQEX_KD_OperatorType_TargetOther,
    ESQEX_KD_OperatorType_ConnectEquals,
    ESQEX_KD_OperatorType_ConnectLinkWith,
    ESQEX_KD_OperatorType_ConnectEZParamLink,
    ESQEX_KD_OperatorType_ConnectEZParamLinkLinear,
};

