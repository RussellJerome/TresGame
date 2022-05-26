#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresGimmickHePuddingBase.generated.h"

class UAnimationAsset;
class UTres1dChainActorComponent;
class UTresBodyCollPrimitive;
class UTresLockonTargetComponent;
class USphereComponent;

UCLASS(Abstract)
class ATresGimmickHePuddingBase : public ATresCharPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresBodyCollPrimitive* BodyCollPrimitiveComp;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresLockonTargetComponent* LockonTargetComp;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTres1dChainActorComponent* Chain1dComponent;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Score;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LocalDelta;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 HitPointPerAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RestHitCount;
    
public:
    ATresGimmickHePuddingBase();
    UFUNCTION(BlueprintCallable)
    void SetDead(bool Set);
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable)
    void Dead();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPIE_StopFalling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPIE_StartFalling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPIE_DeadAnimation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BP_AnimPlayAnimAsset(UAnimationAsset* InAsset, FName InSlotName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, int32 InVoiceGroup);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddScore();
    
};

