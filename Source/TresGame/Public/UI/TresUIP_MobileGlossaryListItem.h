#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MobileGlossaryListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MobileGlossaryListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Text;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlcMark;
    
public:
    UTresUIP_MobileGlossaryListItem();
};

