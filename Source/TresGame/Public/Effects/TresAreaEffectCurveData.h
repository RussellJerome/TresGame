#pragma once
#include "CoreMinimal.h"
#include "TresAreaEffectCurveData.generated.h"

class UCurveFloat;
class UCurveVector;

USTRUCT(BlueprintType)
struct FTresAreaEffectCurveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveVector* AreaBaseColorCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* AreaBrightColorCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* AreaDarkColorCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* AreaColorSynthesisCurve;
    
    TRESGAME_API FTresAreaEffectCurveData();
};

