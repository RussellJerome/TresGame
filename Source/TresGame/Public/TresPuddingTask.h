#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "ETresPuddingResultRank.h"
#include "ETresPuddingTaskType.h"
#include "ETresUIGradeTextValue.h"
#include "TresPuddingTask.generated.h"

UCLASS()
class UTresPuddingTask : public UTresTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_GameTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_GameWarningTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_GameAlertTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_LimitScore;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_RankAScore;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_RankBScore;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETresPuddingTaskType m_TaskType;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bForceFinish;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bStopGameTimer;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_Score;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_RecordScore;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_Step;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bInGame;
    
    UPROPERTY(BlueprintReadWrite)
    ETresPuddingResultRank m_ResultRank;
    
public:
    UTresPuddingTask();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateScoreWidget(const int32 Score, const ETresUIGradeTextValue grade);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetScore(const int32 Score, const ETresUIGradeTextValue grade);
    
    UFUNCTION(BlueprintCallable)
    void SaveResult(int32 Score, const bool bClearRankA, const bool bClearRankB, const bool bClearRankC);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NextStep();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInGame() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDisableGameFinish();
    
    UFUNCTION(BlueprintPure)
    int32 GetScore() const;
    
    UFUNCTION(BlueprintPure)
    ETresPuddingResultRank GetResultRank() const;
    
    UFUNCTION(BlueprintPure)
    ETresPuddingTaskType GetPuddingTaskType() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceFinishGame();
    
    UFUNCTION(BlueprintCallable)
    void CheckTrophy();
    
    UFUNCTION(BlueprintCallable)
    void AddScore(const int32 Score, const ETresUIGradeTextValue grade);
    
};

