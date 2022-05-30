#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_CampMenuAdventureGuide.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_CampMenuAdventureGuide : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_CuisineAbility;
    
    UPROPERTY(Transient)
    UGFxObject* m_CuisineAbilityNameText;
    
    UPROPERTY(Transient)
    UGFxObject* m_CuisineTime;
    
    UPROPERTY(Transient)
    UGFxObject* m_CuisineTimeGauge;
    
    UPROPERTY(Transient)
    UGFxObject* m_CuisineTimeText;
    
    UPROPERTY(Transient)
    UGFxObject* m_CuisineParameterTexts[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_CuisineBonusParameters[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_CuisineBonusParameterTexts[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_MognetName;
    
    UPROPERTY(Transient)
    UGFxObject* m_MognetNum;
    
public:
    UTresUIP_CampMenuAdventureGuide();
};

