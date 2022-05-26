#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresUIP_HudGummiShipMessageWindow.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudGummiShipMessageWindow : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudWindowTimeOut);
    
private:
    UPROPERTY(Transient)
    UGFxObject* m_pMessageWindowText;
    
public:
    UTresUIP_HudGummiShipMessageWindow();
};

