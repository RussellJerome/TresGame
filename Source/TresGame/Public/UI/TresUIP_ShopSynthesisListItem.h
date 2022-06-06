#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_ShopSynthesisListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_ShopSynthesisListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_ItemIconText;
    
    UPROPERTY(Transient)
    UGFxObject* m_ItemNameText;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumPossessText;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumArrow;
    
    UPROPERTY(Transient)
    UGFxObject* m_ClearMark;
    
public:
    UTresUIP_ShopSynthesisListItem();
};

