#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_ShopMaterialListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_ShopMaterialListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_RarityIconText;
    
    UPROPERTY(Transient)
    UGFxObject* m_ItemIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_ItemName;
    
    UPROPERTY(Transient)
    UGFxObject* m_ItemCount;
    
public:
    UTresUIP_ShopMaterialListItem();
};

