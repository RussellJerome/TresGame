#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresUIP_HudGummiShipScoreRate.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudGummiShipScoreRate : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pNumAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNumEff;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNumTextEff;
    
public:
    UTresUIP_HudGummiShipScoreRate();
};

