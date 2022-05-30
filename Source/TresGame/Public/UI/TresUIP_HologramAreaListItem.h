#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_HologramAreaListItem.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(NonTransient)
class UTresUIP_HologramAreaListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Num;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_AreaIcon;
    
public:
    UTresUIP_HologramAreaListItem();
};

