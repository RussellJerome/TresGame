#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresUIP_HudGummiShipAlert.generated.h"

class UGFxObject;
class UAudioComponent;

UCLASS(NonTransient)
class UTresUIP_HudGummiShipAlert : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTextField;
    
    UPROPERTY(Export)
    UAudioComponent* m_pAudioComponent;
    
public:
    UTresUIP_HudGummiShipAlert();
};

