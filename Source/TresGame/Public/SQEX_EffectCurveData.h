#pragma once
#include "CoreMinimal.h"
#include "FSQEX_EFFCT_CURVE_DATA_AXIS.h"
#include "SQEX_EffectCurveData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSQEX_EffectCurveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<FSQEX_EFFCT_CURVE_DATA_AXIS> ParamAxis;
    
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* CurveData;
    
    UPROPERTY()
    bool bUseCurveAsset;
    
    UPROPERTY(EditAnywhere)
    FName XCurveName;
    
    UPROPERTY()
    bool bUseParameterX;
    
    UPROPERTY(EditAnywhere)
    FName YCurveName;
    
    UPROPERTY()
    bool bUseParameterY;
    
    UPROPERTY(EditAnywhere)
    FName ZCurveName;
    
    UPROPERTY()
    bool bUseParameterZ;
    
    TRESGAME_API FSQEX_EffectCurveData();
};

