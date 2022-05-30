#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex313_DarkBiteShadow.h"
#include "TresNotifyInterface.h"
#include "TresProjectile_e_ex352_DarkBiteShadow.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class ATresProjectile_e_ex352_DarkBiteShadow : public ATresProjectile_e_ex313_DarkBiteShadow, public ITresNotifyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ShadowEffDataForAppearDarkMatter;
    
public:
    ATresProjectile_e_ex352_DarkBiteShadow();
    
    // Fix for true pure virtual functions not being implemented
};

