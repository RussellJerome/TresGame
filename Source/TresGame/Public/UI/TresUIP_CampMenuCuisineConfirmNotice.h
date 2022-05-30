#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_CampMenuCuisineConfirmNotice.generated.h"

class UGFxObject;
class UTresASProxyTresControlsButton;

UCLASS(NonTransient)
class UTresUIP_CampMenuCuisineConfirmNotice : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_TitleText;
    
    UPROPERTY(Transient)
    UGFxObject* m_CusineIcons[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_CusineNames[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_CusineNameTexts[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_Ability;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityNameText;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityHelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_Parameters[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_ParameterPrefixTexts[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_ParameterTexts[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_BonusParameters[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_BonusParameterTexts[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_MessageText;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_ButtonYes;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_ButtonNo;
    
public:
    UTresUIP_CampMenuCuisineConfirmNotice();
};

