#pragma once
#include "CoreMinimal.h"
#include "TresProjectileStaticMeshBase.h"
#include "BX901_RailSlideProjectileInfo.h"
#include "BX901_RailSlideProjDropInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex901_RailSlideBase.generated.h"

class UTresBodyCollComponent;
class UParticleSystemComponent;
class UParticleSystem;
class UTresCharMovementComponent;
class AActor;

UCLASS(Abstract)
class ATresProjectile_e_ex901_RailSlideBase : public ATresProjectileStaticMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FBX901_RailSlideProjectileInfo m_RailSlideProjInfo;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_HitPoint;
    
    UPROPERTY(EditDefaultsOnly)
    FBX901_RailSlideProjDropInfo m_DropInfo;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FireParticle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_FireParticleComp;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ExplodeParticle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ExplodeParticleComp;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresCharMovementComponent* MyCharMovement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* MyBodyColl;
    
protected:
    UPROPERTY(Transient)
    AActor* m_HomingTargetActor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fRelativeVelocity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector m_vCurrentOffsetVelocity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool m_bEndHoming;
    
public:
    ATresProjectile_e_ex901_RailSlideBase();
    UFUNCTION(BlueprintCallable)
    void RefreshAtkColl();
    
};

