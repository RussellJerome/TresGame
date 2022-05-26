#pragma once
#include "CoreMinimal.h"
#include "EX354_UpShotInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX354_UpShotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxUpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxDownTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotateVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bKeepVelocityOnHoming;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinHomingTime;
    
    TRESGAME_API FEX354_UpShotInfo();
};

