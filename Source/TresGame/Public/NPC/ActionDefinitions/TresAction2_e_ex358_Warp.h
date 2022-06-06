#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex358_Base.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresAction2_e_ex358_Warp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction2_e_ex358_Warp : public UTresAction_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvQueryRunMode::Type> m_EnvQueryRunMode;
    
public:
    UTresAction2_e_ex358_Warp();
};

