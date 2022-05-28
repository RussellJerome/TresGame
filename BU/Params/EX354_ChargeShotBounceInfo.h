#pragma once
#include "CoreMinimal.h"
#include "EX354_ChargeShotBounceInfo.generated.h"

class UEnvQuery;

USTRUCT(BlueprintType)
struct FEX354_ChargeShotBounceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<int32> m_iMaxBounceCountArray;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bCountReflectAsBounce;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fMaxBounceCountDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<float> m_fVelocityArray;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UEnvQuery* m_EQS_Bounce;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fEQSWaitTime;
    
    TRESGAME_API FEX354_ChargeShotBounceInfo();
};

