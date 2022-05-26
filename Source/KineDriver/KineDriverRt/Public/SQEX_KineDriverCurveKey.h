#pragma once
#include "CoreMinimal.h"
#include "ESQEX_KD_InterpolateType.h"
#include "SQEX_KineDriverCurveKey.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverCurveKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    float X;
    
    UPROPERTY()
    float Y;
    
    UPROPERTY()
    float LeftTanX;
    
    UPROPERTY()
    float LeftTanY;
    
    UPROPERTY()
    float RightTanX;
    
    UPROPERTY()
    float RightTanY;
    
    UPROPERTY()
    TEnumAsByte<ESQEX_KD_InterpolateType> InterpType;
    
    KINEDRIVERRT_API FSQEX_KineDriverCurveKey();
};

