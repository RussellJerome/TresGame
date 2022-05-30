#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex357_Base.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresAction1_e_ex357_Warp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction1_e_ex357_Warp : public UTresAction_e_ex357_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableActionAbortWait: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsWarpInActionEnd: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableWarpOutActionAbort: 1;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvQueryRunMode::Type> m_EnvQueryRunMode;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_RevengeEnvQueryMaxRadiusList;
    
public:
    UTresAction1_e_ex357_Warp();
};

