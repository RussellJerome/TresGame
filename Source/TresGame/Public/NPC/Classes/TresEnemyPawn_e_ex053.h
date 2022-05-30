#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex053.generated.h"

class UParticleSystem;
class ATresRailSlideActor;
class UTresEnemyState_e_ex053_Jump;
class ATresDecalMeshSplineActor;
class UParticleSystemComponent;

UCLASS()
class ATresEnemyPawn_e_ex053 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* m_pDiveEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_DiveEffectAttachName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresEnemyState_e_ex053_Jump> m_JumpState;
    
    UPROPERTY(Transient)
    bool m_bShoted;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATresRailSlideActor>> m_RailActorList;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATresDecalMeshSplineActor>> m_SplineActorList;
    
    UPROPERTY(Transient)
    float m_DieTime;
    
    UPROPERTY(Transient)
    int32 m_Score;
    
    UPROPERTY(Transient)
    int32 m_DieScore;
    
    UPROPERTY(Transient)
    int32 m_FreezeDieScore;
    
    UPROPERTY(Transient)
    float m_JumpPower;
    
    UPROPERTY(Transient)
    float m_JumpGravityScale;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UParticleSystemComponent> m_pDiveEffectCom;
    
    UPROPERTY(Transient)
    bool m_bNotifyStop;
    
    UPROPERTY(Transient)
    bool m_bDiveGround;
    
public:
    ATresEnemyPawn_e_ex053();
    UFUNCTION(BlueprintImplementableEvent)
    void KillEvent(const bool IsFreeze);
    
    UFUNCTION(BlueprintPure)
    int32 GetScore() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFreezeDieScore() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDieScore() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void DamageEvent(const bool IsDie);
    
};

