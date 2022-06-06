#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MenuGummiPieceList.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MenuGummiPieceList : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pNewMark;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGetMark;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTxIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTxName;
    
public:
    UTresUIP_MenuGummiPieceList();
};

