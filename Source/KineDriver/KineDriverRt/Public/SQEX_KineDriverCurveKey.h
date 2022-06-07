#pragma once
#include "CoreMinimal.h"
#include "ESQEX_KD_InterpolateType.h"
#include "SQEX_KineDriverCurveKey.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverCurveKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float X;
    
    UPROPERTY(EditAnywhere)
    float Y;
    
    UPROPERTY(EditAnywhere)
    float LeftTanX;
    
    UPROPERTY(EditAnywhere)
    float LeftTanY;
    
    UPROPERTY(EditAnywhere)
    float RightTanX;
    
    UPROPERTY(EditAnywhere)
    float RightTanY;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_KD_InterpolateType> InterpType;
    
    KINEDRIVERRT_API FSQEX_KineDriverCurveKey();
};

