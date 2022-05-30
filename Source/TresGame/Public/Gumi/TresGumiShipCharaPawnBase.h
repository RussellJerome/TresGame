#pragma once
#include "CoreMinimal.h"
#include "TresAnimInterface.h"
#include "TresGumiShipPawnBase.h"
#include "Engine/EngineTypes.h"
#include "ETresGumiShipReactionType.h"
#include "UObject/NoExportTypes.h"
#include "ETresGumiShipBadStateType.h"
#include "TresGumiShipCharaPawnBase.generated.h"

class UTresSkeletalMeshComponent;
class AActor;
class UTresGumiShipAtkCollisionSetCompo;
class UTresGumiShipBodyCollisionSetCompo;
class USceneComponent;
class UTresGumiShipWeaponSequence;
class UTresEffectAttachComponent;
class UTresInterpGroup;
class UTresInterpGroupInst;
class UPrimitiveComponent;

UCLASS(Abstract)
class TRESGAME_API ATresGumiShipCharaPawnBase : public ATresGumiShipPawnBase, public ITresAnimInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipDefeated, const AActor*, pTarget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipDead);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGumiShipChangeHp, const int32, dOldHp, const int32, dNewHp, const float, fRatio);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresGumiShipCauseDamage, const AActor*, pTarget, const float, fDamage);
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipChangeHp m_OnChangeHpDispather;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* m_pCameraBasePoint;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* m_pMeshBasePoint;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* m_pSkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipBodyCollisionSetCompo* m_pBodyCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipAtkCollisionSetCompo* m_pAtkComllision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipWeaponSequence* m_pWeaponSequence;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresEffectAttachComponent* m_pEffectAttach;
    
public:
    UPROPERTY(Transient)
    TArray<UTresInterpGroup*> m_InterpGroup;
    
    UPROPERTY(Transient)
    TArray<UTresInterpGroupInst*> m_InterpGroupInst;
    
    ATresGumiShipCharaPawnBase();
    UFUNCTION(BlueprintCallable)
    void SetVisibility(const bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshFadeRate(float fFadeRate, bool bCheckVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetInvincible(const bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableReaction(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    int32 SetEffectGroupID(int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyCollisionEnable(const bool bIn, const bool bForce);
    
    UFUNCTION(BlueprintPure)
    bool IsInvincible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCinematicMode() const;
    
    UFUNCTION(BlueprintPure)
    FHitResult GetLastHitResult() const;
    
    UFUNCTION(BlueprintPure)
    float GetHPRatio() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHPMax() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHP() const;
    
    UFUNCTION(BlueprintPure)
    bool BP_IsAnimEnd(FName SlotName) const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetAnimCurrentTime(FName SlotName) const;
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimStop(float fBlendOut, FName SlotName);
    
    UFUNCTION(BlueprintCallable)
    float BP_AnimPlay(FName AnimName, bool bIsLoop);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void _ReceiveTakeReaction(const ETresGumiShipReactionType eReactionType, const FVector& rvImpactNormal);
    
    UFUNCTION(BlueprintImplementableEvent)
    void _ReceiveTakeDamage(const AActor* pDamageCauser, const UPrimitiveComponent* pHitComponent, const float fDamagePoint);
    
    UFUNCTION(BlueprintImplementableEvent)
    void _ReceiveTakeBadState(const ETresGumiShipBadStateType eBadStateType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void _ReceivePreTakeDamage(const AActor* pDamageCauser, const UPrimitiveComponent* pHitComponent, const float fDamagePoint);
    
    UFUNCTION(BlueprintImplementableEvent)
    void _ReceivePreDead();
    
    UFUNCTION(BlueprintImplementableEvent)
    void _ReceiveDead();
    
    UFUNCTION(BlueprintImplementableEvent)
    void _ReceiveChangeHp(const int32 dOldHp, const int32 dNewHp, const float fRatio);
    
private:
    UFUNCTION()
    void _OnHitComponent(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
    UFUNCTION()
    void _OnBeginOverlapComponent(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
    
    // Fix for true pure virtual functions not being implemented
};

