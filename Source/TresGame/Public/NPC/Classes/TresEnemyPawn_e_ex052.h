#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "SpawnEx052Actors.h"
#include "TresEnemyPawn_e_ex052.generated.h"

class AActor;
class ATresCharPawnBase;

UCLASS()
class ATresEnemyPawn_e_ex052 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bBigPudding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_Score;
    
    UPROPERTY(EditAnywhere)
    TArray<FSpawnEx052Actors> m_SpawnActorsGroup;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeedMin;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_EatContinueMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EatContinueRate;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AActor>> m_TeleportActors;
    
    UPROPERTY(EditAnywhere)
    float m_TeleportPlayerDistance;
    
    UPROPERTY(Transient)
    int32 m_ChildrenHaveMax;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATresCharPawnBase> m_wpEatPawn;
    
    UPROPERTY(Transient)
    int32 m_EatStep;
    
    UPROPERTY(Transient)
    bool m_bNotifyStop;
    
    UPROPERTY(Transient)
    bool m_bCinematicIdleMotion;
    
public:
    ATresEnemyPawn_e_ex052();
    UFUNCTION(BlueprintCallable)
    void SetScore(const int32 Score);
    
    UFUNCTION(BlueprintCallable)
    void SetMinSpeed(const float MinSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSpeed(const float MaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetEatContinueRate(const float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetEatContinueMax(const int32 Max);
    
    UFUNCTION(BlueprintCallable)
    void SetChildrenHaveMax(const int32 Max);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStop();
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyStartEat(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyEatPawn(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void KillEvent();
    
    UFUNCTION(BlueprintPure)
    bool IsCanCreateChildren(const int32 CreateNum) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScore() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetEatContinueRate() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetEatContinueMax() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChildrenNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChildrenHaveMax() const;
    
    UFUNCTION(BlueprintCallable)
    void EatPawn(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable)
    int32 CreateChildren(const int32 CreateNum);
    
};

