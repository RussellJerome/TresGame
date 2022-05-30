#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MobileRecipeListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MobileRecipeListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Icon;
    
    UPROPERTY(Transient)
    UGFxObject* m_CategoryText;
    
    UPROPERTY(Transient)
    UGFxObject* m_Text;
    
    UPROPERTY(Transient)
    UGFxObject* m_GreatSuccessMark;
    
public:
    UTresUIP_MobileRecipeListItem();
};

