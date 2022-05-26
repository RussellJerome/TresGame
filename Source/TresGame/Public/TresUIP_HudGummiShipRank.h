#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresUIP_HudGummiShipRank.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudGummiShipRank : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pGauge;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNumAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBaseDeco;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGaugeBody;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGaugeEff;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNumEffText;
    
public:
    UTresUIP_HudGummiShipRank();
};

