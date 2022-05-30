#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresActor_e_dw401_Smoke.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(HideDropdown)
class ATresActor_e_dw401_Smoke : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_SmokeEff;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_SmokeEffData;
    
public:
    ATresActor_e_dw401_Smoke();
};

