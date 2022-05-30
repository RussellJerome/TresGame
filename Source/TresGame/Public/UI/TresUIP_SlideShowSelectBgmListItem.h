#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_SlideShowSelectBgmListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_SlideShowSelectBgmListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pBgmText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTimeNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSoundBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDataType;
    
    UPROPERTY(Transient)
    UGFxObject* m_pListPhoto;
    
public:
    UTresUIP_SlideShowSelectBgmListItem();
};

