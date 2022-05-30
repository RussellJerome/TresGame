#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TresGumiShipAttachEffectComponent.generated.h"

class UParticleSystem;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipAttachEffectComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* Particle;
    
    UPROPERTY(EditAnywhere)
    bool AutoStart;
    
    UTresGumiShipAttachEffectComponent();
    UFUNCTION(BlueprintCallable)
    void EndEffect();
    
    UFUNCTION(BlueprintCallable)
    void CreateEffect();
    
};

