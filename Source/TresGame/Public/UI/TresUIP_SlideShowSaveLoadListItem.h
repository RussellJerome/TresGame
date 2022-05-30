#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_SlideShowSaveLoadListItem.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(NonTransient)
class UTresUIP_SlideShowSaveLoadListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pListext;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBgmText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDateText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTimeText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pFrameAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pFrameLineAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pPhotoAnm;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pFrameIcon;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pPhotoIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDataText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNoDataText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSlotText;
    
public:
    UTresUIP_SlideShowSaveLoadListItem();
};

