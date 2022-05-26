#pragma once
#include "CoreMinimal.h"
#include "TresProjectileStaticMeshBase.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_bx901_Drill.generated.h"

class UParticleSystem;
class UTresStaticMeshComponent;
class UTresBodyCollComponent;
class UParticleSystemComponent;
class USceneComponent;
class ATresProjectileBase;

UCLASS(Abstract)
class ATresProjectile_e_bx901_Drill : public ATresProjectileStaticMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iDrillNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDrillMargin;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSpawnSelf;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMeshHideTimeAfterHit;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_LightEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_LightEffectComp;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BrokenEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_BrokenEffectComp;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* m_OriginalDrillComp;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* MyBodyColl;
    
protected:
    UPROPERTY(Export)
    TArray<USceneComponent*> m_DrillCompArray;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresProjectileBase>> m_DuplicatedDrillArray;
    
public:
    ATresProjectile_e_bx901_Drill();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USceneComponent* DuplicateDrillComp(FVector Offset);
    
    UFUNCTION(BlueprintPure)
    UTresStaticMeshComponent* BP_GetMyMesh();
    
};

