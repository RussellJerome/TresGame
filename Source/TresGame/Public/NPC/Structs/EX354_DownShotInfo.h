#pragma once
#include "CoreMinimal.h"
#include "EX354_DownShotInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX354_DownShotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLandMoveStartHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLandMoveHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxLandMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotateVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bKeepVelocityOnHoming;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fNoHomingDistance;
    
    TRESGAME_API FEX354_DownShotInfo();
};

