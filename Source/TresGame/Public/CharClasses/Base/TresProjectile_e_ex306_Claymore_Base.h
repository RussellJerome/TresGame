#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "WaveSet_e_ex310.h"
#include "WaveOneCollInfo_e_ex310.h"
#include "TresProjectile_e_ex306_Claymore_Base.generated.h"

class USceneComponent;
class UTresProjectileMeshComponent_e_ex310;

UCLASS(Abstract)
class ATresProjectile_e_ex306_Claymore_Base : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* MyRot;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UTresProjectileMeshComponent_e_ex310* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_NoDestroyOnImpact;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveSet_e_ex310 m_WaveSet;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveOneCollInfo_e_ex310 m_WaveOneColl;
    
    ATresProjectile_e_ex306_Claymore_Base();
    UFUNCTION(BlueprintCallable)
    void SpawnWave_OneColl(int32 InParam, bool bOwnerLoc, FVector inOwnerLoc, bool bOwnerYaw, float inOwnerYaw);
    
    UFUNCTION(BlueprintCallable)
    void SpawnWave(int32 InParam, bool bOwnerLoc, FVector inOwnerLoc, bool bOwnerYaw, float inOwnerYaw);
    
    UFUNCTION(BlueprintPure)
    bool IsShutDownCalled();
    
    UFUNCTION(BlueprintPure)
    bool IsGroundHit(FHitResult inHit) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BpNotifyExplode(const FHitResult& Impact);
    
    UFUNCTION(BlueprintCallable)
    void BpDoDisableAttackColl();
    
};

