#pragma once
#include "CoreMinimal.h"
#include "TresUIP_Hologram_CharaInfoIcon.h"
#include "TresUIParts.h"
#include "TresUIP_Hologram.generated.h"

class UGFxObject;
class UTresUIP_SaveLoad;
class UTresUIP_MobileAlbum;
class UTresASProxyTresControlsIcon;
class UTresASProxyTresControlsButton;
class UTresASProxyTresControlsList;

UCLASS()
class UTresUIP_Hologram : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_StageBg;
    
    UPROPERTY(Transient)
    TArray<UTresASProxyTresControlsIcon*> m_StageBg_ImageList;
    
    UPROPERTY(Transient)
    UGFxObject* m_MenuCmdStart;
    
    UPROPERTY(Transient)
    TArray<UTresASProxyTresControlsIcon*> m_MenuCmdStart_ImageList;
    
    UPROPERTY(Transient)
    UGFxObject* m_SelectAreaRoot;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_NewProjButton;
    
    UPROPERTY(Transient)
    UGFxObject* m_NewProjButtonNewMark;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_LoadProjButton;
    
    UPROPERTY(Transient)
    UGFxObject* m_LoadProjButtonNewMark;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_AreaSelectList;
    
    UPROPERTY(Transient)
    UGFxObject* m_InfoArea_WorldName;
    
    UPROPERTY(Transient)
    UGFxObject* m_InfoArea_AreaName;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_InfoArea_WorldIcon;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_InfoArea_AreaImg;
    
    UPROPERTY(Transient)
    UGFxObject* m_AreaSelect_InfoChara_CategoryName;
    
    UPROPERTY(Transient)
    TArray<UGFxObject*> m_AreaSelect_InfoChara_SwitchBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_AreaSelect_InfoChara_Catalogue;
    
    UPROPERTY(Transient)
    TArray<FTresUIP_Hologram_CharaInfoIcon> m_AreaSelect_InfoChara_IconList;
    
    UPROPERTY(Transient)
    UGFxObject* m_MenuCmdMain;
    
    UPROPERTY(Transient)
    TArray<UTresASProxyTresControlsButton*> m_MainButtonList;
    
    UPROPERTY(Transient)
    UGFxObject* m_SelectHologramRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_SelectHologramTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_SelectHologram_CategoryRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_SelectHologram_CategoryName;
    
    UPROPERTY(Transient)
    TArray<UGFxObject*> m_SelectHologram_SwitchBtn;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_HologramSelectList;
    
    UPROPERTY(Transient)
    TArray<UGFxObject*> m_AssetList_SwitchBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlgEditAsset;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlgEditAsset_BodyRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlgEditAsset_AssetName;
    
    UPROPERTY(Transient)
    TArray<UGFxObject*> m_DlgEditAsset_AssetSwitchBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlgEditAsset_ListEdit;
    
    UPROPERTY(Transient)
    TArray<UTresASProxyTresControlsButton*> m_DlgEditAsset_ButtonList;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlgEditAsset_PoseTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlgEditAsset_PoseCount;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlgEditAsset_PoseIndex;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlgEditAsset_PoseMax;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlgEditAsset_FaceCount;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlgEditAsset_FaceIndex;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlgEditAsset_FaceMax;
    
    UPROPERTY(Transient)
    TArray<UGFxObject*> m_DlgEditAsset_ButtonSwitchBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlgEditAsset_Base;
    
    UPROPERTY(Transient)
    UGFxObject* m_SaveLoadRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_SaveLoad_RemoveButton;
    
    UPROPERTY(Transient)
    UGFxObject* m_SaveLoad_Title;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_SaveLoadSelectList;
    
    UPROPERTY(Transient)
    UGFxObject* m_SaveLoad_InfoChara_CategoryName;
    
    UPROPERTY(Transient)
    TArray<UGFxObject*> m_SaveLoad_InfoChara_SwitchBtn;
    
    UPROPERTY(Transient)
    TArray<FTresUIP_Hologram_CharaInfoIcon> m_SaveLoad_InfoChara_IconList;
    
    UPROPERTY(Transient)
    UGFxObject* m_AssetInfoRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_AssetInfoBody;
    
    UPROPERTY(Transient)
    TArray<UGFxObject*> m_AssetInfo_NumList;
    
    UPROPERTY(Transient)
    TArray<UGFxObject*> m_AssetInfo_NumMaxList;
    
    UPROPERTY(Transient)
    UGFxObject* m_AssetInfo_Filter;
    
    UPROPERTY(Transient)
    UGFxObject* m_MenuCmdSystem;
    
    UPROPERTY(Transient)
    TArray<UTresASProxyTresControlsButton*> m_SystemButtonList;
    
    UPROPERTY(Transient)
    UTresUIP_MobileAlbum* m_Album;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpMsgRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpMsgText;
    
    UPROPERTY(Transient)
    UTresUIP_SaveLoad* m_SaveMenu;
    
public:
    UTresUIP_Hologram();
};

