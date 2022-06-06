#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex316_Warp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction1_e_ex316_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_ActionEQSQuery;
    
    UTresAction1_e_ex316_Warp();
};

