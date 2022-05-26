#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MobileCodeListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MobileCodeListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Text;
    
public:
    UTresUIP_MobileCodeListItem();
};

