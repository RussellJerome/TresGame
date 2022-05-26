#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresMove1_e_ex016_ShadowMove.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresMove1_e_ex016_ShadowMove : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ShadowMoveDecalEffData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ShadowMoveDecalEff;
    
public:
    UTresMove1_e_ex016_ShadowMove();
};

