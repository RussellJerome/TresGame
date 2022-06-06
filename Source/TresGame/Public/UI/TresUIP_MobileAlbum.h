#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MobilePortalApp.h"
#include "TresUIP_MobileAlbum.generated.h"

class UTresASProxyTresControlsIcon;
class UTresASProxyTresControlsScrollBar;
class UTresUIP_MobileAlbumPhotoListItem;
class UTresASProxyRSLHelpText;
class UTresASProxyRSLBtnInfo;
class UGFxObject;

UCLASS()
class UTresUIP_MobileAlbum : public UTresUIP_MobilePortalApp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_asProxyIcon_fullPicture;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_asProxyIcon_miniPicture;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsScrollBar* m_asProxyScrollBar_scrollbar;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_asProxyHelpText_helpText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLBtnInfo* m_asProxyBtnInfo_btnInfo;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_MobileAlbumPhotoListItem*> m_arrayUIAlbumItem;
    
    UPROPERTY(Transient)
    UGFxObject* m_Root;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_btnInfo;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_photoAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_photoAlbum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_albumBG;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_albumHeader;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_helpTextAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhotoAnmArrowRight;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhotoAnmArrowLeft;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhotoAnmImgError;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtPhotoAnmImgError;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhotoAnmPhoto;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhotoAnmPhotoLoading;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhotoAnmPhotoPict;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhtAlbmAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhtAlbmAlbum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhtAlbmAlbumList;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhtAlbmAlbumListArrowR;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhtAlbmAlbumListArrowL;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtPhtAlbmAlbumListRcdNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtPhtAlbmAlbumListPhtNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhtAlbmAlbumListScrollBar;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhtAlbmDayTimeAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtPhtAlbmDayTime;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhtAlbmPhotoMn;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhtAlbmPhotoMnLoading;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhtAlbmPhotoMnPict;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcPhtAlbmNoPhotoAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtPhtAlbmNoPhoto;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcHelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtHeadRcdMax;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtHeadRcdNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtHeadTotal;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtHeadTitle;
    
public:
    UTresUIP_MobileAlbum();
};

