#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresUIP_HudGummiShipAutoLock.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudGummiShipAutoLock : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pAutoLock;
    
public:
    UTresUIP_HudGummiShipAutoLock();
};

