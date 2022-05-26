#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresEx050SpawnInfo.h"
#include "TresEx050PuddingNum.h"
#include "TresEnemyPawn_e_ex050Manager.generated.h"

class ATresEnemyPawnBase;
class ATresEnemyPawn_e_ex050;

UCLASS()
class ATresEnemyPawn_e_ex050Manager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_CheckPlayerDistance;
    
    UPROPERTY(EditAnywhere)
    float m_CheckFlyPuddingDistance;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresEx050SpawnInfo> m_SmallPuddingSpawnInfo;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresEx050SpawnInfo> m_BigPuddingSpawnInfo;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresEx050SpawnInfo> m_FlyPuddingSpawnInfo;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresEx050SpawnInfo> m_ChasePuddingSpawnInfo;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresEx050SpawnInfo> m_SmallPuddingSpawnInfoForMode2;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresEx050SpawnInfo> m_BigPuddingSpawnInfoForMode2;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresEx050SpawnInfo> m_FlyPuddingSpawnInfoForMode2;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresEx050SpawnInfo> m_SmallPuddingSpawnInfoForMode3;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresEx050SpawnInfo> m_BigPuddingSpawnInfoForMode3;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresEx050SpawnInfo> m_FlyPuddingSpawnInfoForMode3;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawnBase> m_SmallPuddingClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawnBase> m_BigPuddingClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawnBase> m_FlyPuddingClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawnBase> m_ChasePuddingClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnPuddingNumLimit;
    
    UPROPERTY(BlueprintReadOnly)
    FTresEx050PuddingNum m_SmallPuddingNum;
    
    UPROPERTY(BlueprintReadOnly)
    FTresEx050PuddingNum m_BigPuddingNum;
    
    UPROPERTY(BlueprintReadOnly)
    FTresEx050PuddingNum m_FlyPuddingNum;
    
    UPROPERTY(BlueprintReadOnly)
    FTresEx050PuddingNum m_ChasePuddingNum;
    
    UPROPERTY(BlueprintReadWrite)
    int32 m_SpawnRequestSmallNum;
    
    UPROPERTY(BlueprintReadWrite)
    int32 m_SpawnRequestBigNum;
    
    UPROPERTY(BlueprintReadWrite)
    int32 m_SpawnRequestFlyNum;
    
    UPROPERTY(BlueprintReadWrite)
    int32 m_SpawnRequestChaseNum;
    
private:
    UPROPERTY(Transient)
    TArray<ATresEnemyPawn_e_ex050*> m_pSmallPuddings;
    
    UPROPERTY(Transient)
    TArray<ATresEnemyPawn_e_ex050*> m_pBigPuddings;
    
    UPROPERTY(Transient)
    TArray<ATresEnemyPawn_e_ex050*> m_pFlyPuddings;
    
    UPROPERTY(Transient)
    TArray<ATresEnemyPawn_e_ex050*> m_pChasePuddings;
    
    UPROPERTY(Transient)
    int32 m_SpawnPuddingNum;
    
    UPROPERTY(Transient)
    bool m_bNotifyStop;
    
    UPROPERTY(Transient)
    int32 m_SpawnMode;
    
public:
    ATresEnemyPawn_e_ex050Manager();
    UFUNCTION(BlueprintCallable)
    void UpdateSmallPuddingNum();
    
    UFUNCTION(BlueprintCallable)
    void UpdateFlyPuddingNum();
    
    UFUNCTION(BlueprintCallable)
    void UpdateChasePuddingNum();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBigPuddingNum();
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnSmallPudding(const int32 SmallPuddingNum);
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnFlyPudding(const int32 FlyPuddingNum);
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnChasePudding(const int32 ChasePuddingNum);
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnBigPudding(const int32 BigPuddingNum);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableRailMove(const bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStop();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSpawnPuddingMode(const int32 mode);
    
};

