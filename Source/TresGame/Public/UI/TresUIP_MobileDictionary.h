#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MobilePortalApp.h"
#include "TresUIP_MobileDictionary.generated.h"

class UGFxObject;
class ATresUIActor;
class UTresASProxyTresControlsScrollBar;
class UTresASProxyTresControlsIcon;
class UPackage;
class UTresASProxyTresControlsList;
class ATresUIActorLightSet;
class UTresUIActorPostProcessSetDataAsset;
class ATresUIActorBG;

UCLASS()
class UTresUIP_MobileDictionary : public UTresUIP_MobilePortalApp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Root;
    
    UPROPERTY(Transient)
    UGFxObject* m_header;
    
    UPROPERTY(Transient)
    UGFxObject* m_Page;
    
    UPROPERTY(Transient)
    UGFxObject* m_PageHeader;
    
    UPROPERTY(Transient)
    UGFxObject* m_PageHeaderLine;
    
    UPROPERTY(Transient)
    UGFxObject* m_PageContent;
    
    UPROPERTY(Transient)
    UGFxObject* m_CharaNameText;
    
    UPROPERTY(Transient)
    UGFxObject* m_CharaSubtitleText;
    
    UPROPERTY(Transient)
    UGFxObject* m_EnemyHeader;
    
    UPROPERTY(Transient)
    UGFxObject* m_EnemySymbol;
    
    UPROPERTY(Transient)
    UGFxObject* m_EnemySubtitleText;
    
    UPROPERTY(Transient)
    UGFxObject* m_EnemyCountText;
    
    UPROPERTY(Transient)
    UGFxObject* m_ContentText;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsScrollBar* m_ContentTextScrollBar;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpTextBase;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_Bg;
    
    UPROPERTY(Transient)
    UGFxObject* m_CharaView;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_ActorIcon;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_ListCategory;
    
    UPROPERTY(Transient)
    UGFxObject* m_ListCategoryScrollBarThumb;
    
    UPROPERTY(Transient)
    UGFxObject* m_ListCategoryScrollBarBg;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_ListContent;
    
    UPROPERTY(Transient)
    UGFxObject* m_ListContentScrollBarThumb;
    
    UPROPERTY(Transient)
    UGFxObject* m_ListContentScrollBarBg;
    
    UPROPERTY(Transient)
    UPackage* m_ActorAssetPackage;
    
    UPROPERTY(Transient)
    UPackage* m_LightSetAssetPackage;
    
    UPROPERTY(Transient)
    UPackage* m_PostProcessSetAssetPackage;
    
    UPROPERTY(Transient)
    ATresUIActor* m_UIActor;
    
    UPROPERTY(Transient)
    ATresUIActorLightSet* m_UIActorLightSet;
    
    UPROPERTY(Transient)
    UTresUIActorPostProcessSetDataAsset* m_UIActorPostProcessSet;
    
    UPROPERTY(Transient)
    ATresUIActorBG* m_UIActorBG;
    
public:
    UTresUIP_MobileDictionary();
};

