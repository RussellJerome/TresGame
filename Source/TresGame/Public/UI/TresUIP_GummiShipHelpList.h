#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_GummiShipHelpList.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_GummiShipHelpList : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pNewMark;
    
    UPROPERTY(Transient)
    UGFxObject* m_pHelpText;
    
public:
    UTresUIP_GummiShipHelpList();
};

