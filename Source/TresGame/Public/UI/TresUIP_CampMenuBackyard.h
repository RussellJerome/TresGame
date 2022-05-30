#pragma once
#include "CoreMinimal.h"
#include "TresUIP_CampMenuSubParts.h"
#include "TresUIP_CampMenuBackyard.generated.h"

class UTresASProxyTresControlsTabControl;
class UTresASProxyRSLStageCategory;
class UGFxObject;
class UTresASProxyTresControlsList;
class UTresASProxyRSLItemStatusA;
class UTresUIP_CampMenuBackyardTargetButton;

UCLASS(NonTransient)
class UTresUIP_CampMenuBackyard : public UTresUIP_CampMenuSubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_Content;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsTabControl* m_ItemListTab;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_ItemList;
    
    UPROPERTY(Transient)
    UGFxObject* m_ItemListEmptyText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLItemStatusA* m_RSLItemStatus;
    
    UPROPERTY(Transient)
    UTresUIP_CampMenuBackyardTargetButton* m_TargetButtons[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_TargetListItem;
    
    UPROPERTY(Transient)
    UGFxObject* m_TargetListIconText;
    
    UPROPERTY(Transient)
    UGFxObject* m_TargetListNameText;
    
    UPROPERTY(Transient)
    UGFxObject* m_TargetListCountText;
    
public:
    UTresUIP_CampMenuBackyard();
};

