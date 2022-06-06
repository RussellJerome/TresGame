#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_dw402_Die_E3.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAction2_e_dw402_Die_E3 : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_ShadowDiveEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ShadowDiveEffData;
    
    UTresAction2_e_dw402_Die_E3();
};

