#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsButton.h"
#include "TresUIP_CampMenuBackyardTargetButton.generated.h"

class UTresASProxyTresControlsIcon;
class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_CampMenuBackyardTargetButton : public UTresASProxyTresControlsButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_CharaFaceIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_AttackPowerState;
    
    UPROPERTY(Transient)
    UGFxObject* m_AttackPowerArrowIconText;
    
    UPROPERTY(Transient)
    UGFxObject* m_AttackPowerNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_DefensePowerState;
    
    UPROPERTY(Transient)
    UGFxObject* m_DefensePowerArrowIconText;
    
    UPROPERTY(Transient)
    UGFxObject* m_DefensePowerNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_MagicPowerState;
    
    UPROPERTY(Transient)
    UGFxObject* m_MagicPowerArrowIconText;
    
    UPROPERTY(Transient)
    UGFxObject* m_MagicPowerNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_HpState;
    
    UPROPERTY(Transient)
    UGFxObject* m_HpNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_HpMaxText;
    
    UPROPERTY(Transient)
    UGFxObject* m_MpState;
    
    UPROPERTY(Transient)
    UGFxObject* m_MpNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_MpMaxText;
    
    UPROPERTY(Transient)
    UGFxObject* m_ApState;
    
    UPROPERTY(Transient)
    UGFxObject* m_ApArrowIconText;
    
    UPROPERTY(Transient)
    UGFxObject* m_ApNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_FpRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_FpState;
    
    UPROPERTY(Transient)
    UGFxObject* m_FpNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_FpMaxText;
    
public:
    UTresUIP_CampMenuBackyardTargetButton();
};

