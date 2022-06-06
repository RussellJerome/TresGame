#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex773_ReverseFlarePillarOmen.generated.h"

class UParticleSystemComponent;
class UParticleSystem;
class ATresActor_e_ex773_Updraft;
class UCurveFloat;
class AActor;

UCLASS(Abstract)
class ATresProjectile_e_ex773_ReverseFlarePillarOmen : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_FlarePillarOmenEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_FlarePillarOmenEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Omen1Time;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Omen2Time;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator FlarePillarRotator;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex773_Updraft> m_pro_UpdraftClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FixedHeight;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_UpdraftForceRateCurve;
    
    ATresProjectile_e_ex773_ReverseFlarePillarOmen();
    UFUNCTION(BlueprintCallable)
    void CreateUpdraft();
    
    UFUNCTION(BlueprintCallable)
    void CreateSurfacingEffect();
    
    UFUNCTION(BlueprintCallable)
    void CreateFlarePillarOmenEff();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_StartOmen(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    FVector BPE_GetFlarePillarSpawnLocation(AActor* Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    float BPE_CalcUpdraftForce(float srcPower, float nowHeight);
    
};

