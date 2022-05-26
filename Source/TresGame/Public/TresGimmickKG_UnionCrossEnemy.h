#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EGimmickKG_UnionCrossEnemy_MoveMode.h"
#include "TresGimmickKG_UnionCrossEnemy.generated.h"

class USceneComponent;
class UParticleSystemComponent;
class ATresGimmickKG_UnionCrossRide;
class UParticleSystem;

UCLASS(Config=Game)
class ATresGimmickKG_UnionCrossEnemy : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* MyParticleSystem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetOffsetSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnemySize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxHP;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageMoveSpeedRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageSlowTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UpdateProgressThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PlayerDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerDamageIntervalTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* DestroyEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OffsetLocationMinParam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* HitEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlowParam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EGimmickKG_UnionCrossEnemy_MoveMode MoveMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HitSheld;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool NoDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShieldHitInterval;
    
    ATresGimmickKG_UnionCrossEnemy();
    UFUNCTION(BlueprintCallable)
    void SetUnionCross(ATresGimmickKG_UnionCrossRide* NewUnionCross);
    
    UFUNCTION(BlueprintCallable)
    void NotifyHitPlayer();
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    float GetProgressLength() const;
    
    UFUNCTION(BlueprintPure)
    float GetMoveTimeCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFixedPlayerDamage() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetDirRotationToTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void EmitterUpdate(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void DestroyEnemy();
    
    UFUNCTION(BlueprintPure)
    bool CanHitToPlayer() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector CalcOffsetLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void AddDamageData(float WaitTime, float Damage, bool LazerDamage);
    
};

