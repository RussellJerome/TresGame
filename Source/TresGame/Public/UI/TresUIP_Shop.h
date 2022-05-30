#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Shop.generated.h"

class UTresUIP_ShopMesWin;
class UTresUIP_ShopSynthesisConfirmWindow;
class UTresASProxyRSLTopMenuCmd;
class UTresUIP_ShopPhotoMission;
class UGFxObject;
class UTresASProxyTresControlsIcon;
class UTresASProxyTresControlsTabControl;
class UTresASProxyRSLStageCategory;
class UTresASProxyTresControlsList;
class UTresASProxyRSLHelpText;
class UTresASProxyRSLItemStatusA;
class UTresUIP_ShopSynthesisTop;
class UTresUIP_ShopItemSynthesis;
class UTresUIP_ShopKeyPowerUp;
class UTresUIP_ShopCollection;
class UTresUIP_ShopMaterialListMenu;
class UTresASProxyRSLStageFrame;

UCLASS()
class UTresUIP_Shop : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresUIP_ShopMesWin* m_MesWin;
    
    UPROPERTY(Transient)
    UTresUIP_ShopSynthesisConfirmWindow* m_SynthesisConfirmWindow;
    
    UPROPERTY(Transient)
    UGFxObject* m_CharaIconOpenCloseAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_CharaIconPosAnim;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_CharaIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_MenuTop;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategoryTop;
    
    UPROPERTY(Transient)
    UTresASProxyRSLTopMenuCmd* m_TopMenuCmds[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_MenuList;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsTabControl* m_ItemListTab;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_ItemList;
    
    UPROPERTY(Transient)
    UGFxObject* m_ItemListLines;
    
    UPROPERTY(Transient)
    UGFxObject* m_ItemListHeaderAmount;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_ItemListHelpText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategoryList;
    
    UPROPERTY(Transient)
    UTresASProxyRSLItemStatusA* m_ItemStatusA;
    
    UPROPERTY(Transient)
    UTresUIP_ShopSynthesisTop* m_SynthesisTop;
    
    UPROPERTY(Transient)
    UTresUIP_ShopItemSynthesis* m_ItemSynthesisMenu;
    
    UPROPERTY(Transient)
    UTresUIP_ShopKeyPowerUp* m_KeyPowerUpMenu;
    
    UPROPERTY(Transient)
    UTresUIP_ShopPhotoMission* m_PhotoMissionMenu;
    
    UPROPERTY(Transient)
    UTresUIP_ShopCollection* m_CollectionMenu;
    
    UPROPERTY(Transient)
    UTresUIP_ShopMaterialListMenu* m_MaterialListMenu;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageFrame* m_StageFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_StageBg;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_Snapshot;
    
    UPROPERTY(Transient)
    UGFxObject* m_ScreenEffBlack;
    
public:
    UTresUIP_Shop();
};

