#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemy_e_ex003Effect.h"
#include "TresEnemyPawn_e_ex003.generated.h"

class UParticleSystemComponent;
class USQEX_ParticleAttachDataAsset;

UCLASS()
class ATresEnemyPawn_e_ex003 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_MeteorMoveSpeed;
    
protected:
    UPROPERTY(Export)
    TArray<UParticleSystemComponent*> m_FireEff;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemy_e_ex003Effect> m_FireEffData;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ChangeFlameMaterialTime;
    
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_DamageFlameModeShiftHp;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_DamageFlameModeShiftProbability[4];
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_NextFlameModeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WeakTime;
    
private:
    UPROPERTY()
    bool m_IsFlameMode;
    
public:
    ATresEnemyPawn_e_ex003();
    UFUNCTION(BlueprintCallable)
    void SetFlameMode(bool NewIsFlameMode);
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsWeak();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsFlameMode();
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsFlameAction();
    
public:
    UFUNCTION(BlueprintPure)
    float GetFullBody2BlendRate() const;
    
};

