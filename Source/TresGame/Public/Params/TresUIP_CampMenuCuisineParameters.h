#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_CampMenuCuisineParameters.generated.h"

class UGFxObject;
class UTresASProxyTresControlsRadarChart;

UCLASS(NonTransient)
class UTresUIP_CampMenuCuisineParameters : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Ability;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityTextRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityIconText;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityNameText;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityHelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_ParameterRisePack;
    
    UPROPERTY(Transient)
    UGFxObject* m_ParametersRisePlus[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_ParametersRiseText[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_ParametersTotalChange[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_ParametersTotalChangeText[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_ParametersTotalText[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_BonusParameters[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_BonusParameterTexts[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_Time;
    
    UPROPERTY(Transient)
    UGFxObject* m_TimeGaugeRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_TimeGauge;
    
    UPROPERTY(Transient)
    UGFxObject* m_TimeText;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsRadarChart* m_RadarChart;
    
public:
    UTresUIP_CampMenuCuisineParameters();
};

