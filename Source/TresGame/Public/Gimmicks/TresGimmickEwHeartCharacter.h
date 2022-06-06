#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SQEX_SplineMoverExecutor.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickEwHeartCharacter.generated.h"

class USceneComponent;
class USkeletalMeshComponent;
class ASQEX_SplineActor;
class UParticleSystemComponent;

UCLASS(Abstract)
class ATresGimmickEwHeartCharacter : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HitLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OpacityCompleteTime;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bEnableAnimationOpacity;
    
    UPROPERTY(Transient)
    FSQEX_SplineMoverExecutor SplineMover;
    
public:
    ATresGimmickEwHeartCharacter();
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* splineActor, float positionRate);
    
    UFUNCTION(BlueprintCallable)
    void SetAbsorbParticle(UParticleSystemComponent* cp);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_HitPlayer();
    
    UFUNCTION(BlueprintImplementableEvent)
    float BPE_GetDestroyCompleteTime();
    
    UFUNCTION(BlueprintImplementableEvent)
    FRotator BPE_GetAbsorbParticleRotation();
    
};

