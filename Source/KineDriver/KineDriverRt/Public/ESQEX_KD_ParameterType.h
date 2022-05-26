#pragma once
#include "CoreMinimal.h"
#include "ESQEX_KD_ParameterType.generated.h"

UENUM(BlueprintType)
enum ESQEX_KD_ParameterType {
    ESQEX_KD_ParameterType_Other,
    ESQEX_KD_ParameterType_TranslateX,
    ESQEX_KD_ParameterType_TranslateY,
    ESQEX_KD_ParameterType_TranslateZ,
    ESQEX_KD_ParameterType_Distance,
    ESQEX_KD_ParameterType_RotateQuatX,
    ESQEX_KD_ParameterType_RotateQuatY,
    ESQEX_KD_ParameterType_RotateQuatZ,
    ESQEX_KD_ParameterType_RotateQuatW,
    ESQEX_KD_ParameterType_RotateAngle,
    ESQEX_KD_ParameterType_BendingQuatX,
    ESQEX_KD_ParameterType_BendingQuatY,
    ESQEX_KD_ParameterType_BendingQuatZ,
    ESQEX_KD_ParameterType_BendingQuatW,
    ESQEX_KD_ParameterType_BendingAngle,
    ESQEX_KD_ParameterType_BendS,
    ESQEX_KD_ParameterType_BendT,
    ESQEX_KD_ParameterType_Roll,
    ESQEX_KD_ParameterType_QuatAngle,
    ESQEX_KD_ParameterType_ScaleX,
    ESQEX_KD_ParameterType_ScaleY,
    ESQEX_KD_ParameterType_ScaleZ,
};

