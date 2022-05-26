#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresEnemyPawn_e_ex056Manager.generated.h"

class ATresEnemyPawn_e_ex056;
class ASQEX_SplineActor;

UCLASS()
class ATresEnemyPawn_e_ex056Manager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_ex056> m_FlyPuddingClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_ex056> m_BonusPuddingClass;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<ASQEX_SplineActor>> m_FlyPuddingSplines;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<ASQEX_SplineActor>> m_BonusPuddingSplines;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnWaitTimeMax;
    
private:
    UPROPERTY(Transient)
    TArray<ATresEnemyPawn_e_ex056*> m_pFlyPuddings;
    
    UPROPERTY(Transient)
    TArray<ATresEnemyPawn_e_ex056*> m_pBonusPuddings;
    
    UPROPERTY(Transient)
    bool m_bNotifyStop;
    
public:
    ATresEnemyPawn_e_ex056Manager();
    UFUNCTION(BlueprintCallable)
    bool SpawnFlyPudding(const int32 Num, const int32 SplineIndex, const float MoveSpeed);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnBonusPudding(const int32 SplineIndex, const float MoveSpeed, const float FluffyMoveSpeed, const float FluffyMoveRange, const float SelfKillDistance);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStop();
    
    UFUNCTION(BlueprintPure)
    int32 GetFlyPuddingRequestNum(const int32 SplineIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFlyPuddingNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBonusPuddingNum() const;
    
    UFUNCTION(BlueprintCallable)
    void AddWave();
    
};

