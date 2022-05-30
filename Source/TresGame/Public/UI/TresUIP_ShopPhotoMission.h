#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_ShopPhotoMission.generated.h"

class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;
class UGFxObject;
class UTresASProxyTresControlsIcon;
class UTresASProxyRSLStageCategory;

UCLASS(NonTransient)
class UTresUIP_ShopPhotoMission : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_PhotoMissionList;
    
    UPROPERTY(Transient)
    UGFxObject* m_ListEmptyAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_ListEmptyText;
    
    UPROPERTY(Transient)
    UGFxObject* m_ItemInfo;
    
    UPROPERTY(Transient)
    UGFxObject* m_IconDisplayAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_ItemName;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_ItemIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_Balloon;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory;
    
public:
    UTresUIP_ShopPhotoMission();
};

