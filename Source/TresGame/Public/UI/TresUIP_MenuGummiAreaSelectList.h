#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MenuGummiAreaSelectList.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(NonTransient)
class UTresUIP_MenuGummiAreaSelectList : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Thumbnail;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_AreaIcon;
    
public:
    UTresUIP_MenuGummiAreaSelectList();
};

