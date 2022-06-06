#pragma once
#include "CoreMinimal.h"
#include "TresUICampMenuCuisineFavoriteItem.h"
#include "TresUISubParts.h"
#include "TresUIP_CampMenuCuisineFavorite.generated.h"

class UGFxObject;
class UTresASProxyTresControlsButton;

UCLASS(NonTransient)
class UTresUIP_CampMenuCuisineFavorite : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Window;
    
    UPROPERTY(Transient)
    UGFxObject* m_Title;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_Buttons[8];
    
    UPROPERTY(Transient)
    FTresUICampMenuCuisineFavoriteItem m_Items[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_ParametersText[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_BonusParameters[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_BonusParameterTexts[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_Ability;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityIconText;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityNameText;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityHelpText;
    
public:
    UTresUIP_CampMenuCuisineFavorite();
};

