#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsButton.h"
#include "TresUIP_MobileAlbumPhotoListItem.generated.h"

class UTresASProxyTresControlsIcon;
class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MobileAlbumPhotoListItem : public UTresASProxyTresControlsButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_asProxyIcon_photo;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_thumbnailCursor;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_selectCursor;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_deleteCursor;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_checkMark;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_photoMini;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_loading;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_fullPicture;
    
public:
    UTresUIP_MobileAlbumPhotoListItem();
};

