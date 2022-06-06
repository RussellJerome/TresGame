#pragma once
#include "CoreMinimal.h"
#include "TresAction_XIIILB_Base.h"
#include "TresAction_e_ex356_Interface.h"
#include "TresEnemyHideAndSeekTurnParam_e_ex356.h"
#include "TresAction2_e_ex356_HideAndSeek.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction2_e_ex356_HideAndSeek : public UTresAction_XIIILB_Base, public ITresAction_e_ex356_Interface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_StunEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverrideAutoLockonRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FailedTimeGageDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ExplodeCardAttackHitTimeGaugeDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShuffleGatherRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShuffleGatherLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShuffleGatherMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShuffleRandomRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShuffleTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShuffleMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShuffleTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ShuffleTargetLocationNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShuffleTime2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShuffleMoveSpeed2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShuffleTurnSpeed2;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ShuffleTargetLocationNum2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AllPlainCardDestroyAfterLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyHideAndSeekTurnParam_e_ex356 m_LuxordCardTurnParam;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyHideAndSeekTurnParam_e_ex356 m_PlainCardTurnParam;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyHideAndSeekTurnParam_e_ex356 m_ExplodeCardTurnParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LuxordCardSubTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableAllCardTurnToCameraLocation: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ExplodeCardRate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_PlainCardMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardLocationDistance;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_CardLocationEnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsExplodeCardDistanceCheck: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ExplodeCardExplodeDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ExplodeCardExplodeIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ExplodeCardExplodeNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ExplodeCardTargetFollowSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ExplodeCardExplodeDelayTime;
    
public:
    UTresAction2_e_ex356_HideAndSeek();
    
    // Fix for true pure virtual functions not being implemented
};

