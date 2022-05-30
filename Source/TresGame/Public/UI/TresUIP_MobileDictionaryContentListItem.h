#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MobileDictionaryContentListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MobileDictionaryContentListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Name;
    
    UPROPERTY(Transient)
    UGFxObject* m_Line;
    
    UPROPERTY(Transient)
    UGFxObject* m_Text;
    
    UPROPERTY(Transient)
    UGFxObject* m_CompleteMark;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlcMark;
    
public:
    UTresUIP_MobileDictionaryContentListItem();
};

