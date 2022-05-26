#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipProjectileBase.generated.h"

class ATresGumiShipProjectileBase;
class UTresGumiShipAtkCollisionSetCompo;
class UPrimitiveComponent;
class AActor;

UCLASS(Abstract)
class ATresGumiShipProjectileBase : public ATresGumiShipActorBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresGumiShipToRecyclePool, ATresGumiShipProjectileBase*, pProjectile, bool&, bWasRecycled);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipProjectileOverRange);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipOnDestroyOverride);
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipProjectileOverRange OnOverRangeDispather;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_ProjectileDataName;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    UTresGumiShipAtkCollisionSetCompo* m_pCollision;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fHomingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fDoHomingInDot;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bDestroyWhenHit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bUseInitialOwnerSpeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bSearchWeaponWhenEndPlay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bSearchWeaponWhenHitOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bIgnoreTargetForwardWhenPredictLocation: 1;
    
public:
    ATresGumiShipProjectileBase();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void _ReceiveOverRange();
    
    UFUNCTION(BlueprintImplementableEvent)
    void _ReceiveHit(const FHitResult& rHitResult);
    
    UFUNCTION()
    void _OnHitBinding(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
};

