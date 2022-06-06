#pragma once
#include "CoreMinimal.h"
#include "TresLgRxRushData.generated.h"

USTRUCT(BlueprintType)
struct FTresLgRxRushData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_Rate;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumMin;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumMax;
    
    UPROPERTY(EditAnywhere)
    float m_TimeMin;
    
    UPROPERTY(EditAnywhere)
    float m_TimeMax;
    
    TRESGAME_API FTresLgRxRushData();
};

