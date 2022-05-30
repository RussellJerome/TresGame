#pragma once
#include "CoreMinimal.h"
#include "ETresDebugMenuMotionObjectPropertyType.generated.h"

UENUM(BlueprintType)
enum ETresDebugMenuMotionObjectPropertyType {
    ETresDebugMenuMotionObjectProperty_Motion_X,
    ETresDebugMenuMotionObjectProperty_Motion_Y,
    ETresDebugMenuMotionObjectProperty_Rotation_Z,
    ETresDebugMenuMotionObjectProperty_Scale_X,
    ETresDebugMenuMotionObjectProperty_Scale_Y,
    ETresDebugMenuMotionObjectProperty_AdvClr_R_Pct,
    ETresDebugMenuMotionObjectProperty_AdvClr_R_Offset,
    ETresDebugMenuMotionObjectProperty_AdvClr_G_Pct,
    ETresDebugMenuMotionObjectProperty_AdvClr_G_Offset,
    ETresDebugMenuMotionObjectProperty_AdvClr_B_Pct,
    ETresDebugMenuMotionObjectProperty_AdvClr_B_Offset,
    ETresDebugMenuMotionObjectProperty_AdvClr_A_Pct,
    ETresDebugMenuMotionObjectProperty_AdvClr_A_Offset,
    ETresDebugMenuMotionObjectProperty_Blur_BlurX,
    ETresDebugMenuMotionObjectProperty_Blur_BlurY,
    ETresDebugMenuMotionObjectProperty_Glow_BlurX,
    ETresDebugMenuMotionObjectProperty_Glow_BlurY,
    ETresDebugMenuMotionObjectProperty_Glow_Strength,
    ETresDebugMenuMotionObjectProperty_Glow_Color_R,
    ETresDebugMenuMotionObjectProperty_Glow_Color_G,
    ETresDebugMenuMotionObjectProperty_Glow_Color_B,
    ETresDebugMenuMotionObjectProperty_Glow_Color_A,
    ETresDebugMenuMotionObjectProperty_DropShadow_BlurX,
    ETresDebugMenuMotionObjectProperty_DropShadow_BlurY,
    ETresDebugMenuMotionObjectProperty_DropShadow_Strength,
    ETresDebugMenuMotionObjectProperty_DropShadow_Angle,
    ETresDebugMenuMotionObjectProperty_DropShadow_Distance,
    ETresDebugMenuMotionObjectProperty_DropShadow_Color_R,
    ETresDebugMenuMotionObjectProperty_DropShadow_Color_G,
    ETresDebugMenuMotionObjectProperty_DropShadow_Color_B,
    ETresDebugMenuMotionObjectProperty_DropShadow_Color_A,
    ETresDebugMenuMotionObjectProperty_MAX UMETA(Hidden),
};

