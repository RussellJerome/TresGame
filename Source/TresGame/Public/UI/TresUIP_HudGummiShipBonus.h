#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresUIP_HudGummiShipBonus.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudGummiShipBonus : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pBonusTitleCo;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBonusText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBonusPoint;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBonusKind;
    
public:
    UTresUIP_HudGummiShipBonus();
};

