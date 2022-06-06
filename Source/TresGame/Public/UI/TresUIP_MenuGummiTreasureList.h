#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MenuGummiTreasureList.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MenuGummiTreasureList : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pTreasureName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pIsGet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCategoryTextIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNewMark;
    
public:
    UTresUIP_MenuGummiTreasureList();
};

