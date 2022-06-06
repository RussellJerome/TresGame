#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MobileMixListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MobileMixListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Icon;
    
    UPROPERTY(Transient)
    UGFxObject* m_Text;
    
public:
    UTresUIP_MobileMixListItem();
};

