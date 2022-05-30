#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresASProxyRSLItemStatusB.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(NonTransient)
class UTresASProxyRSLItemStatusB : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_NumHPColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumHP;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumMPColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumMP;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumAPColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumAP;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumAttackColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumAttack;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumDefenceColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumDefence;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumMagicColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumMagic;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumResistFireColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumResistFire;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumResistBlizzardColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumResistBlizzard;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumResistThunderColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumResistThunder;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumResistWaterColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumResistWater;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumResistAeroColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumResistAero;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumResistDarkColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumResistDark;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_Icon;
    
public:
    UTresASProxyRSLItemStatusB();
};

