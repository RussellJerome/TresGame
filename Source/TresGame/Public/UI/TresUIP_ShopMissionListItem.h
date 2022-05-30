#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_ShopMissionListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_ShopMissionListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Name;
    
    UPROPERTY(Transient)
    UGFxObject* m_ClearMark;
    
public:
    UTresUIP_ShopMissionListItem();
};

