#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_CampMenuCharacterStatus.generated.h"

class UGFxObject;
class UTresUIP_CampMenuCharacterLoading;

UCLASS(NonTransient)
class UTresUIP_CampMenuCharacterStatus : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Name;
    
    UPROPERTY(Transient)
    UGFxObject* m_Level;
    
    UPROPERTY(Transient)
    UGFxObject* m_ExpGauge;
    
    UPROPERTY(Transient)
    UGFxObject* m_HpBuff;
    
    UPROPERTY(Transient)
    UGFxObject* m_MpBuff;
    
    UPROPERTY(Transient)
    UGFxObject* m_HP;
    
    UPROPERTY(Transient)
    UGFxObject* m_HpMax;
    
    UPROPERTY(Transient)
    UGFxObject* m_Mp;
    
    UPROPERTY(Transient)
    UGFxObject* m_MpMax;
    
    UPROPERTY(Transient)
    UTresUIP_CampMenuCharacterLoading* m_CharaLoading;
    
    UPROPERTY(Transient)
    UGFxObject* m_HighlightBG;
    
public:
    UTresUIP_CampMenuCharacterStatus();
};

