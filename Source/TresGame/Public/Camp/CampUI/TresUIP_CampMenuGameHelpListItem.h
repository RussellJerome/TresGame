#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_CampMenuGameHelpListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_CampMenuGameHelpListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_DlcMark;
    
public:
    UTresUIP_CampMenuGameHelpListItem();
};

