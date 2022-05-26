#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUIParts.h"
#include "TresUIP_HelpGummiShip.generated.h"

class UGFxObject;
class UTresASProxyTresControlsList;

UCLASS()
class UTresUIP_HelpGummiShip : public UTresGumiShipUIParts {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGFxObject* m_pTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_pHelpText;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pASProxyListItem;
    
public:
    UTresUIP_HelpGummiShip();
};

