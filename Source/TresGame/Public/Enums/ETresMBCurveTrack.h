#pragma once
#include "CoreMinimal.h"
#include "ETresMBCurveTrack.generated.h"

UENUM(BlueprintType)
enum ETresMBCurveTrack {
    ETresMBCRVT_ScalingX,
    ETresMBCRVT_ScalingY,
    ETresMBCRVT_ScalingZ,
    ETresMBCRVT_RotationX,
    ETresMBCRVT_RotationY,
    ETresMBCRVT_RotationZ,
    ETresMBCRVT_TranslationX,
    ETresMBCRVT_TranslationY,
    ETresMBCRVT_TranslationZ,
    ETresMBCRVT_Roll,
    ETresMBCRVT_FieldOfView,
    ETresMBCRVT_Max,
};

