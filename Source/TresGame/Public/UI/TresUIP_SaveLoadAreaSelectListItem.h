#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_SaveLoadAreaSelectListItem.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(NonTransient)
class UTresUIP_SaveLoadAreaSelectListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_AreaSelectListItemAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_MapName;
    
    UPROPERTY(Transient)
    UGFxObject* m_AreaName;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_AreaIcon;
    
public:
    UTresUIP_SaveLoadAreaSelectListItem();
};

