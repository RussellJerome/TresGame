#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresGumiShipRaderObject.h"
#include "TresUIP_HudGummiShipRader.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudGummiShipRader : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FTresGumiShipRaderObject m_rRaderIcons[40];
    
    UPROPERTY(Transient)
    UGFxObject* m_pRaderEff;
    
public:
    UTresUIP_HudGummiShipRader();
};

