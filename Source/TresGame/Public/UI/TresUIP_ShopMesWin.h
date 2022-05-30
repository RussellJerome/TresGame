#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_ShopMesWin.generated.h"

class UGFxObject;
class UTresASProxyTresControlsButton;

UCLASS(NonTransient)
class UTresUIP_ShopMesWin : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_HeaderAmount;
    
    UPROPERTY(Transient)
    UGFxObject* m_ItemIconText;
    
    UPROPERTY(Transient)
    UGFxObject* m_ItemNameText;
    
    UPROPERTY(Transient)
    UGFxObject* m_ItemNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_PriceText;
    
    UPROPERTY(Transient)
    UGFxObject* m_MunnyBeforeText;
    
    UPROPERTY(Transient)
    UGFxObject* m_MunnyAfterText;
    
    UPROPERTY(Transient)
    UGFxObject* m_IconMax;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpText;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_ButtonYes;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_ButtonNo;
    
public:
    UTresUIP_ShopMesWin();
};

