#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresAction1_e_ex113_Warp.generated.h"

class UAnimSequenceBase;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction1_e_ex113_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_WarpStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_WarpEndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_RevengeEnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvQueryRunMode::Type> m_EnvQueryRunMode;
    
public:
    UTresAction1_e_ex113_Warp();
};

