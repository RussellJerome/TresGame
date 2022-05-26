#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_dw401_ChangeCyclone.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class UTresAction3_e_dw401_ChangeCyclone : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_FallGroundEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_FallGroundBlurEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_AppearGroundEffData;
    
public:
    UTresAction3_e_dw401_ChangeCyclone();
};

