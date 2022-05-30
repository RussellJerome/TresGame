#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresGumiShipSPWeaponGauge.h"
#include "TresUIP_HudGummiShipSPWeapon.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(NonTransient)
class UTresUIP_HudGummiShipSPWeapon : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pIconChargeEffect;
    
    UPROPERTY(Transient)
    UGFxObject* m_pWeapon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGaugeAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pChargeAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pActiveAnm;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pWeaponIconObj;
    
    UPROPERTY(Transient)
    FTresGumiShipSPWeaponGauge m_pSpWeaponGauge[3];
    
public:
    UTresUIP_HudGummiShipSPWeapon();
};

