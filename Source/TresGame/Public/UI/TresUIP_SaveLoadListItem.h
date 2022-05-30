#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_SaveLoadListItem.generated.h"

class UTresUIP_SaveLoadSaveDataDisplayInfo;
class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_SaveLoadListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_OrderNumber;
    
    UPROPERTY(Transient)
    UTresUIP_SaveLoadSaveDataDisplayInfo* m_DisplayInfo;
    
public:
    UTresUIP_SaveLoadListItem();
};

