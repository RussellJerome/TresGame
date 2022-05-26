#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MenuGummiEditPlanList.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MenuGummiEditPlanList : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pNewMark;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTextIcon;
    
public:
    UTresUIP_MenuGummiEditPlanList();
};

