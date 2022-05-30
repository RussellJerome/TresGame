#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_SlideShow.generated.h"

class UTresASProxyTresControlsButton;
class UTresASProxyTresControlsScrollBar;
class ATresHUDSlideShow;
class UTresUIDataAssetSlideShow;
class UGFxObject;
class UTresASProxyTresControlsIcon;
class UTresASProxyTresControlsList;
class UTresUIP_SlideShowPhotoListItem;
class UTresUIP_SlideShowSeq;

UCLASS()
class UTresUIP_SlideShow : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ATresHUDSlideShow* m_pHudSlideShow;
    
    UPROPERTY(Transient)
    UTresUIDataAssetSlideShow* m_pSlideShowData;
    
    UPROPERTY(Transient)
    UGFxObject* m_pScreenSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMainTitleSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pButtonHelpSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pHelpWindowSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBgmTitleSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTopSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSelectBgmSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pConfirmationSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSaveSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLoadSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBgLightSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBgSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMainTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_pButtonHelp;
    
    UPROPERTY(Transient)
    UGFxObject* m_pButtonHelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pHelpWindow;
    
    UPROPERTY(Transient)
    UGFxObject* m_pHelpWindowText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBgmTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBgmTitleText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBgmTitleAnimType;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBgmTitleAnimTypeTimeText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBgmTitleAnimTypeNameText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSelectBgm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pConfirmation;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEdit;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditSortWindow;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditSelectPhoto;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSave;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLoad;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBgLight;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBg;
    
    UPROPERTY(Transient)
    UGFxObject* m_pConfirmPhotoPreviewFrameAnm;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pConfirmPhotoPreviewFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pConfirmPhotoPreviewAnm;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pConfirmPhotoPreview;
    
    UPROPERTY(Transient)
    UGFxObject* m_pConfirmPhotoNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pConfirmPhotoMaxNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pConfirmPhotoArrowL;
    
    UPROPERTY(Transient)
    UGFxObject* m_pConfirmPhotoArrowR;
    
    UPROPERTY(Transient)
    UGFxObject* m_pConfirmFilmBgConf;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditTimelinePhotoNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditTimelinePhotoMaxNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditTimelinePhotoArrowL;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditTimelinePhotoArrowR;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditSelectPhotoNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditSelectPhotoMaxNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditSelectPhotoArrowL;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditSelectPhotoArrowR;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsScrollBar* m_pEditSelectPhotoScrollBar;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSequenceFrameAnm;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pSequenceFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pScreenAnmGage;
    
    UPROPERTY(Transient)
    UGFxObject* m_pScreenPlayGage;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_TopMenuCmd1;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_TopMenuCmd2;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_TopMenuCmd3;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_BgmList;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_ConfirmOptionList;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_SortOptionList;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_SaveList;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_LoadList;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_SlideShowPhotoListItem*> m_pConfirmTimelinePhotos;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_SlideShowPhotoListItem*> m_pEditTimelinePhotos;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_SlideShowPhotoListItem*> m_pEditPhotos;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_SlideShowSeq*> m_pSequencePhotos;
    
public:
    UTresUIP_SlideShow();
};

