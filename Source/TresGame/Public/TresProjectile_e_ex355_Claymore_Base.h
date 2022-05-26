#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "WaveOneCollInfo_e_ex359.h"
#include "WaveSet_e_ex359.h"
#include "Engine/EngineTypes.h"
#include "TresProjectile_e_ex355_Claymore_Base.generated.h"

class USceneComponent;
class UTresProjectileMeshComponent_e_ex359;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract)
class ATresProjectile_e_ex355_Claymore_Base : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* MyRot;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UTresProjectileMeshComponent_e_ex359* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_NoDestroyOnImpact;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveSet_e_ex359 m_WaveSet;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveOneCollInfo_e_ex359 m_WaveOneColl;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIgnorWaveHitAfterProjectileHit;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AuraEffectClass;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_AuraEffectComp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fParticleStartDelayTime;
    
    UPROPERTY()
    bool m_bParticleStartDelayTime;
    
    ATresProjectile_e_ex355_Claymore_Base();
    UFUNCTION(BlueprintCallable)
    void SpawnWave_OneColl(int32 InParam, bool bOwnerLoc, FVector inOwnerLoc, bool bOwnerYaw, float inOwnerYaw);
    
    UFUNCTION(BlueprintCallable)
    void SpawnWave(int32 InParam, bool bOwnerLoc, FVector inOwnerLoc, bool bOwnerYaw, float inOwnerYaw);
    
    UFUNCTION(BlueprintPure)
    bool IsShutDownCalled();
    
    UFUNCTION(BlueprintPure)
    bool IsImpactCalled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGroundHit(FHitResult inHit) const;
    
    UFUNCTION(BlueprintCallable)
    void DoEnableAttackColl();
    
    UFUNCTION(BlueprintCallable)
    void BpPostWaveSpawned();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BpNotifyExplode(const FHitResult& Impact);
    
    UFUNCTION(BlueprintCallable)
    void BpDoDisableAttackColl();
    
};

