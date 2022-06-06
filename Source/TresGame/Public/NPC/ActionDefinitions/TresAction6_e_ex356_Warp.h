#pragma once
#include "CoreMinimal.h"
#include "TresAction_XIIILB_Base.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresAction6_e_ex356_Warp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction6_e_ex356_Warp : public UTresAction_XIIILB_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvQueryRunMode::Type> m_EnvQueryRunMode;
    
public:
    UTresAction6_e_ex356_Warp();
};

