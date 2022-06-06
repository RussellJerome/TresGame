#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_EditGummiShip_AbilityList.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_EditGummiShip_AbilityList : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTotalCostTxt;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAbilityIconFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAbilityIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAbilityLv;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCheckBoxSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCheck;
    
    UPROPERTY(Transient)
    UGFxObject* m_pArrowSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLeftArrow;
    
    UPROPERTY(Transient)
    UGFxObject* m_pRightArrow;
    
public:
    UTresUIP_EditGummiShip_AbilityList();
};

