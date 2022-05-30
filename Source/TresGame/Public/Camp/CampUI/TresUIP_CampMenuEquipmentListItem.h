#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_CampMenuEquipmentListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_CampMenuEquipmentListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_TextIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_CategoryNameRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_CategoryName;
    
    UPROPERTY(Transient)
    UGFxObject* m_AutoReloadMark;
    
    UPROPERTY(Transient)
    UGFxObject* m_TextColorAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_SubCategoryAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_SubCategoryName;
    
public:
    UTresUIP_CampMenuEquipmentListItem();
};

