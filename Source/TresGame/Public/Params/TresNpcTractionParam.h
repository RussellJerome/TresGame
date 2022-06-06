#pragma once
#include "CoreMinimal.h"
#include "TresNpcTractionParam.generated.h"

USTRUCT(BlueprintType)
struct FTresNpcTractionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bTractionXY: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bTractionZUp: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bTractionZDown: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bTractionNear: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bTractionFar: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_TractionDisMin;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_TractionDisMax;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_TractionMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_TractionAcc;
    
    TRESGAME_API FTresNpcTractionParam();
};

