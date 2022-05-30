#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MenuGummiMissionList.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MenuGummiMissionList : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pMissionName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pRarity;
    
    UPROPERTY(Transient)
    UGFxObject* m_pClear;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNewMark;
    
public:
    UTresUIP_MenuGummiMissionList();
};

