#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresAction2_e_ex309_Warp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction2_e_ex309_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvQueryRunMode::Type> m_EnvQueryRunMode;
    
public:
    UTresAction2_e_ex309_Warp();
};

