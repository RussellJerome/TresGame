#pragma once
#include "CoreMinimal.h"
#include "TresUIP_CampMenuSubParts.h"
#include "TresUIP_CampMenuCuisine.generated.h"

class UTresUIP_CampMenuCuisineConfirmNotice;
class UTresASProxyRSLStageCategory;
class UTresASProxyRSLHelpText;
class UTresUIP_CampMenuCuisineSelectButton;
class UTresASProxyTresControlsButton;
class UTresUIP_CampMenuCuisineFavorite;
class UTresUIP_CampMenuCuisineParameters;

UCLASS(NonTransient)
class UTresUIP_CampMenuCuisine : public UTresUIP_CampMenuSubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(Transient)
    UTresUIP_CampMenuCuisineSelectButton* m_CuisineButtons[5];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_EatButton;
    
    UPROPERTY(Transient)
    UTresUIP_CampMenuCuisineFavorite* m_Favorite;
    
    UPROPERTY(Transient)
    UTresUIP_CampMenuCuisineParameters* m_Parameters;
    
    UPROPERTY(Transient)
    UTresUIP_CampMenuCuisineConfirmNotice* m_ConfirmNotice;
    
public:
    UTresUIP_CampMenuCuisine();
};

