#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_ShopMaterialListMenu.generated.h"

class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;
class UGFxObject;
class UTresASProxyRSLStageCategory;

UCLASS(NonTransient)
class UTresUIP_ShopMaterialListMenu : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_MaterialList;
    
    UPROPERTY(Transient)
    UGFxObject* m_ListEmptyAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_ListEmptyText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory;
    
public:
    UTresUIP_ShopMaterialListMenu();
};

