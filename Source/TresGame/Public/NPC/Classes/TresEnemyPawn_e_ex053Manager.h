#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Ex053SpawnGroup.h"
#include "GameFramework/Actor.h"
#include "Ex053SpawnData.h"
#include "TresEnemyPawn_e_ex053Manager.generated.h"

class ATresEnemyPawnBase;
class ATresEnemyPawn_e_ex053;

UCLASS()
class ATresEnemyPawn_e_ex053Manager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FEx053SpawnData> m_SpawnDataArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FEx053SpawnGroup> m_SpawnGroupArray;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATresEnemyPawnBase> m_SpawnClass;
    
    UPROPERTY(EditAnywhere)
    float m_DieTime;
    
    UPROPERTY(EditAnywhere)
    int32 m_Score;
    
    UPROPERTY(EditAnywhere)
    int32 m_DieScore;
    
    UPROPERTY(EditAnywhere)
    int32 m_FreezeDieScore;
    
    UPROPERTY(EditAnywhere)
    float m_CheckPlayerDistance;
    
    UPROPERTY(EditAnywhere)
    float m_SpawnAcotrDisableTime;
    
    UPROPERTY(EditAnywhere)
    float m_JumpPower;
    
    UPROPERTY(EditAnywhere)
    float m_JumpGravityScale;
    
private:
    UPROPERTY(Transient)
    TArray<ATresEnemyPawn_e_ex053*> m_pFzPuddings;
    
    UPROPERTY(Transient)
    bool m_bFirstSpawn;
    
    UPROPERTY(Transient)
    int32 m_SpawnRequestNum;
    
    UPROPERTY(Transient)
    float m_SpawnWaitTimeMax;
    
    UPROPERTY(Transient)
    float m_SpawnWaitTime;
    
    UPROPERTY(Transient)
    bool m_bSpawnModeCluster;
    
    UPROPERTY(Transient)
    bool m_bNotifyStop;
    
public:
    ATresEnemyPawn_e_ex053Manager();
    UFUNCTION(BlueprintCallable)
    void SpawnFzPuddingRequest(const int32 SpawnNum, const float SpawnWaitTime, const bool bSpawnModeCluster);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnAcotrDisableTime(const float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetScore(const int32 Score, const bool bAll);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpPower(const float Power, const bool bAll);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpGravityScale(const float Scale, const bool bAll);
    
    UFUNCTION(BlueprintCallable)
    void SetFreezeDieScore(const int32 Score, const bool bAll);
    
    UFUNCTION(BlueprintCallable)
    void SetDieTime(const int32 Time);
    
    UFUNCTION(BlueprintCallable)
    void SetDieScore(const int32 Score, const bool bAll);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStop();
    
    UFUNCTION(BlueprintPure)
    int32 GetSpawnRequestNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSpawnAcotrDisableTime() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScore() const;
    
    UFUNCTION(BlueprintPure)
    float GetJumpPower() const;
    
    UFUNCTION(BlueprintPure)
    float GetJumpGravityScale() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFzPuddingNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFreezeDieScore() const;
    
    UFUNCTION(BlueprintPure)
    float GetDieTime() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDieScore() const;
    
};

