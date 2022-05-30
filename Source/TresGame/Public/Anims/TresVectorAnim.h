#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresVectorAnim.generated.h"

class UCurveVector;

USTRUCT()
struct FTresVectorAnim {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_SrcValue;
    
    UPROPERTY(EditAnywhere)
    FVector m_UpdatedValue;
    
    UPROPERTY(EditAnywhere)
    FVector m_LimitMin;
    
    UPROPERTY(EditAnywhere)
    FVector m_LimitMax;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* m_pCurveVectorAsset;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bLoopCurveAsset: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bLimitMinValue: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bLimitMaxValue: 1;
    
    TRESGAME_API FTresVectorAnim();
};

