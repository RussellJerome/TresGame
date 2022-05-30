#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_CampMenuBackyardListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_CampMenuBackyardListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_ItemIconText;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumPossessText;
    
public:
    UTresUIP_CampMenuBackyardListItem();
};

