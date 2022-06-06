#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresUIP_HudGummiShipSight.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudGummiShipSight : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UGFxObject* m_pGumiSight;
    
public:
    UTresUIP_HudGummiShipSight();
};

