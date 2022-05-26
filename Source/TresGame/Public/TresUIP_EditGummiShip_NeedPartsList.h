#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_EditGummiShip_NeedPartsList.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_EditGummiShip_NeedPartsList : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pX;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTextIcon;
    
public:
    UTresUIP_EditGummiShip_NeedPartsList();
};

