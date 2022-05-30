#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "HudRalph_RalphBtn.h"
#include "TresUIP_HudRalph.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_HudRalph : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_RalphSwitch;
    
    UPROPERTY(Transient)
    FHudRalph_RalphBtn m_RalphBtns[4];
    
public:
    UTresUIP_HudRalph();
};

