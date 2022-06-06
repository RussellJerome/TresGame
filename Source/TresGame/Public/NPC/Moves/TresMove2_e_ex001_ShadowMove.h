#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresMove2_e_ex001_ShadowMove.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresMove2_e_ex001_ShadowMove : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DecalEffectData;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_DecalEffectComponent;
    
public:
    UTresMove2_e_ex001_ShadowMove();
};

