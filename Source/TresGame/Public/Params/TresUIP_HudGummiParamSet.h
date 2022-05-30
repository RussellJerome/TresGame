#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresUIP_HudGummiParamSet.generated.h"

class UGFxObject;
class UAudioComponent;

UCLASS(NonTransient)
class UTresUIP_HudGummiParamSet : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pShield;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGaugeAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGaugeRedAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pHpGaugeMain;
    
    UPROPERTY(Transient)
    UGFxObject* m_pHpGaugeEff;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBoostGauge;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDyingEff;
    
    UPROPERTY(Transient)
    UGFxObject* m_pFormIcon;
    
    UPROPERTY(Export)
    UAudioComponent* m_pAudioComponent;
    
    UPROPERTY(Transient)
    UGFxObject* m_pShieldGauge;
    
    UPROPERTY(Transient)
    UGFxObject* m_pShieldGaugeAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pShieldGaugeMain;
    
    UPROPERTY(Transient)
    UGFxObject* m_pShieldGaugeEff;
    
public:
    UTresUIP_HudGummiParamSet();
};

