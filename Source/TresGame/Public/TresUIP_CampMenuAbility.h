#pragma once
#include "CoreMinimal.h"
#include "TresUIP_CampMenuSubParts.h"
#include "TresUIP_CampMenuAbility.generated.h"

class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;
class UGFxObject;
class UTresUIP_CampMenuCharacterLoading;
class UTresASProxyRSLStageCategory;

UCLASS(NonTransient)
class UTresUIP_CampMenuAbility : public UTresUIP_CampMenuSubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_AbilityList;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityListTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityListEmptyText;
    
    UPROPERTY(Transient)
    UGFxObject* m_KeybladeAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_KeybladeName;
    
    UPROPERTY(Transient)
    UGFxObject* m_KeybladeIcon;
    
    UPROPERTY(Transient)
    UTresUIP_CampMenuCharacterLoading* m_CharaLoading;
    
    UPROPERTY(Transient)
    UGFxObject* m_CharaName;
    
    UPROPERTY(Transient)
    UGFxObject* m_ApAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_NowUseApAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_NowUseApNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_MaxApNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_ApGauge;
    
    UPROPERTY(Transient)
    UGFxObject* m_ApIncreaseGauge;
    
    UPROPERTY(Transient)
    UGFxObject* m_ApIncreaseGaugeAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_ApLackGauge;
    
    UPROPERTY(Transient)
    UGFxObject* m_ApLackGaugeAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_ApLimitAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_MaxApCountNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_ApCount;
    
    UPROPERTY(Transient)
    UGFxObject* m_ApCountNum;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory;
    
public:
    UTresUIP_CampMenuAbility();
};

