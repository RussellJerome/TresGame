#pragma once
#include "CoreMinimal.h"
#include "EX354_ClusterShotInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FEX354_ClusterShotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxHitNum;
    
    UPROPERTY()
    bool m_bMaxHitNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxGuardNum;
    
    UPROPERTY()
    bool m_bMaxGuardNum;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStartMoveAll;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinMoveWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxMoveWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveWaitTimeSingle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpreadAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxMoveAngle;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_fMoveStraightOnTargetOut;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDisp;
    
    UPROPERTY()
    AActor* m_TargetActor;
    
    TRESGAME_API FEX354_ClusterShotInfo();
};

