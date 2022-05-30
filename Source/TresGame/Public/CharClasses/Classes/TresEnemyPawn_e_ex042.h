#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresEnemyPawn_e_ex042.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class UStaticMeshComponent;
class UCurveVector;
class UCurveFloat;
class UPrimitiveComponent;
class AActor;

UCLASS()
class ATresEnemyPawn_e_ex042 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FTransform m_tAnchorTransform;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform m_tActorTransform;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_AnchorAttachSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector m_vIdleAttachBoneOffset_Property;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fSingleChainLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator m_rSingleChainRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_DamageRotate: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMaxDamageRotAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bConstVelOrTime: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fDamageRotVel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fDamageRotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fReflectMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* StartCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* EndCurve;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDebugCurve: 1;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AnchorEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_AnchorEffectCmp;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsActorConstrained;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bUpdateChainsPostAnim;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fRateSpecificTransformForAnchor;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform m_tAnchorSpecificTransform;
    
    UPROPERTY(BlueprintReadWrite)
    FVector m_vChainsAttachBoneLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FVector m_vSplineStartTangent;
    
    UPROPERTY(BlueprintReadWrite)
    FVector m_vSplineEndTangent;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bIsPhycisSimulated;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bDebug;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UStaticMeshComponent* m_Anchor;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PropellerRotMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_PropellerStCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_PropellerEndCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPropellerEndCurveTimeScale;
    
public:
    ATresEnemyPawn_e_ex042();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPhysicalSimulated(bool bSet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChainMaterialParam(float fValue);
    
    UFUNCTION(BlueprintCallable)
    void SetActorConstrained(bool bSet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FHitResult NotifyWallApproach(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, FHitResult SweepResult);
    
    UFUNCTION(BlueprintPure)
    bool IsInsideBattleArea(FVector inWorldLoc) const;
    
    UFUNCTION(BlueprintPure)
    bool IsDebugDisplay() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChainGenerated();
    
    UFUNCTION(BlueprintPure)
    float GetPropellerRotRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetPropellerRot() const;
    
    UFUNCTION(BlueprintCallable)
    float GetChainsPitch();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAnchorLocation();
    
    UFUNCTION(BlueprintCallable)
    float GetAnchorDistance();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAnchorAttachBoneLocation();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FHitResult CapsuleTrace(FVector Start, FVector End, float Radius, float HalfHeight, bool bForceDisplayDebug) const;
    
};

