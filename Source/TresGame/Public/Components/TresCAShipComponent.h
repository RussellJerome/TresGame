#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresShipDamageParam.h"
#include "SmokeTrigger.h"
#include "TresCAShipComponent.generated.h"

class UParticleSystemComponent;
class USkeletalMeshComponent;
class UParticleSystem;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresCAShipComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bOscEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PitchPowFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RollPowFactor;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresShipDamageParam> m_ShipDamageParamArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresShipDamageParam> m_ShipGuardParamArray;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FSmokeTrigger> m_SmokeTriggerArray;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DamageSmokeParticle;
    
protected:
    UPROPERTY(Export)
    TArray<UParticleSystemComponent*> m_DamageSmokeParticleComponentArray;
    
public:
    UTresCAShipComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void BP_ResetAllDamageSmoke();
    
    UFUNCTION(BlueprintCallable)
    void BP_CreateDamageSmoke(USkeletalMeshComponent* inMesh, float lifePer);
    
};

