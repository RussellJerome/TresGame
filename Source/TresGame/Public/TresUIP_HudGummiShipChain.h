#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresUIP_HudGummiShipChain.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudGummiShipChain : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pCainCount;
    
public:
    UTresUIP_HudGummiShipChain();
};

