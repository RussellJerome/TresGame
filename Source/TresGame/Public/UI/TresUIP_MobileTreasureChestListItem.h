#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MobileTreasureChestListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MobileTreasureChestListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_ChestOnOff;
    
public:
    UTresUIP_MobileTreasureChestListItem();
};

