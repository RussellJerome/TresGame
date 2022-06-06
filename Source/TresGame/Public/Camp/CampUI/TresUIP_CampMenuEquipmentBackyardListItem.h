#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_CampMenuEquipmentBackyardListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_CampMenuEquipmentBackyardListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_TextIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_EquipmentMark;
    
    UPROPERTY(Transient)
    UGFxObject* m_ItemCountText;
    
public:
    UTresUIP_CampMenuEquipmentBackyardListItem();
};

