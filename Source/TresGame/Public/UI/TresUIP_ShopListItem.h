#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_ShopListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_ShopListItem : public UTresASProxyTresControlsListItem {
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
    UGFxObject* m_PriceText;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumPossessText;
    
    UPROPERTY(Transient)
    UGFxObject* m_NumArrow;
    
public:
    UTresUIP_ShopListItem();
};

