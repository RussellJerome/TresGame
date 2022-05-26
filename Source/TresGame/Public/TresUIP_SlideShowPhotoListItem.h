#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsButton.h"
#include "TresUIP_SlideShowPhotoListItem.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(NonTransient)
class UTresUIP_SlideShowPhotoListItem : public UTresASProxyTresControlsButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pSelectCursor;
    
    UPROPERTY(Transient)
    UGFxObject* m_pUsedMark;
    
    UPROPERTY(Transient)
    UGFxObject* m_pPhotoAnm;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pPhotoIcon;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pFrameIcon;
    
public:
    UTresUIP_SlideShowPhotoListItem();
};

