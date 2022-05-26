#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresCoreAnchorComponent.h"
#include "TresASProxyTresControlsList.generated.h"

class UTresASProxyTresControlsListItem;
class UTresASProxyTresControlsScrollBar;

UCLASS(NonTransient)
class UTresASProxyTresControlsList : public UTresASProxyTresCoreAnchorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UTresASProxyTresControlsListItem*> m_ListItems;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsScrollBar* m_ScrollBar;
    
public:
    UTresASProxyTresControlsList();
};

