#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_CodeMenuAchListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_CodeMenuAchListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pLabelName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAchievementNameText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAchievementNameText2;
    
    UPROPERTY(Transient)
    UGFxObject* m_pComplateMark;
    
public:
    UTresUIP_CodeMenuAchListItem();
};

