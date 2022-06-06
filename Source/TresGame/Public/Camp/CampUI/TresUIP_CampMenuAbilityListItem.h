#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_CampMenuAbilityListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_CampMenuAbilityListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_TextIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityEquippable;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityName;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityPointVisibleAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityPoint;
    
    UPROPERTY(Transient)
    UGFxObject* m_CategoryAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_CategoryName;
    
    UPROPERTY(Transient)
    UGFxObject* m_SubCategoryAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_SubCategoryName;
    
public:
    UTresUIP_CampMenuAbilityListItem();
};

