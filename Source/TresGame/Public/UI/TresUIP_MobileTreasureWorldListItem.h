#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MobileTreasureWorldListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MobileTreasureWorldListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_WorldName;
    
    UPROPERTY(Transient)
    UGFxObject* m_TresureNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_CompleteMark;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlcMark;
    
public:
    UTresUIP_MobileTreasureWorldListItem();
};

