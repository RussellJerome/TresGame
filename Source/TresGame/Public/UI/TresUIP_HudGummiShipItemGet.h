#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresUIP_HudGummiShipItemGet.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudGummiShipItemGet : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pMaxIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_pItemName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTextField;
    
public:
    UTresUIP_HudGummiShipItemGet();
};

