#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MobileRecordContentListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MobileRecordContentListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_CategoryText;
    
    UPROPERTY(Transient)
    UGFxObject* m_Text;
    
    UPROPERTY(Transient)
    UGFxObject* m_CompleteMark;
    
public:
    UTresUIP_MobileRecordContentListItem();
};

