#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipWeaponSequencePort.h"
#include "TresGumiShipGimmickActorBase.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipGimmickObjectBase.generated.h"

class UTresGumiShipBodyCollisionSetCompo;
class USceneComponent;
class UTresStaticMeshComponent;
class UTresGumiShipWeaponSequence;
class USQEX_ParticleAttachDataAsset;
class AActor;
class UPrimitiveComponent;

UCLASS(Abstract)
class ATresGumiShipGimmickObjectBase : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* m_pMeshBase;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresStaticMeshComponent* m_pStaticMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipBodyCollisionSetCompo* m_pBodyCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipWeaponSequence* m_pWeaponSequence;
    
public:
    ATresGumiShipGimmickObjectBase();
    UFUNCTION(BlueprintCallable)
    void SetVisibility(const bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshFadeRate(float fFadeRate, bool bCheckVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetInvincible(const bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectAttach(const int32 dGloup);
    
    UFUNCTION(BlueprintCallable)
    void SetEffect(USQEX_ParticleAttachDataAsset* pAttachData, int32 dGroupID, bool bUseDesignatedData);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyCollisionEnable(const bool bIn, const bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseWeaponTrigger(const TEnumAsByte<ETresGumiShipWeaponSequencePort> ePort);
    
    UFUNCTION(BlueprintCallable)
    void PullWeaponTrigger(const TEnumAsByte<ETresGumiShipWeaponSequencePort> ePort, const bool bManual);
    
    UFUNCTION(BlueprintPure)
    bool IsInvincible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void _ReceiveTakeDamage(const AActor* pDamageCauser);
    
    UFUNCTION(BlueprintImplementableEvent)
    void _ReceiveHitSomething(UPrimitiveComponent* pHitComponent, AActor* pHitActor, const FHitResult& rHitInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void _ReceiveDead();
    
    UFUNCTION()
    void _OnRootHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
    UFUNCTION()
    void _OnBodyHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
    UFUNCTION(BlueprintCallable)
    void _InitializeHP(const int32 dMaxHp);
    
};

