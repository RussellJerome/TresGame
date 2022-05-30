#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex105_Warp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction2_e_ex105_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_WarpStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_ActionEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeMotPlayRateMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeMotPlayRateMaxChangeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeRotSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeRotSpeedMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeAtkCollStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeAtkCollInterval;
    
    UTresAction2_e_ex105_Warp();
};

