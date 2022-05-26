#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresMove2_e_ex201_ShadowMove.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresMove2_e_ex201_ShadowMove : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ShadowEffectData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ShadowEffect;
    
public:
    UTresMove2_e_ex201_ShadowMove();
};

