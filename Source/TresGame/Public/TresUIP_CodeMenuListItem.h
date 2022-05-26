#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_CodeMenuListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_CodeMenuListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pCodeNameText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCheckBox;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCheckBoxBase;
    
    UPROPERTY(Transient)
    UGFxObject* m_pIconCategory;
    
public:
    UTresUIP_CodeMenuListItem();
};

