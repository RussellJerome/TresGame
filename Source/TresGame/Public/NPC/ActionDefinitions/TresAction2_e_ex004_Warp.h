#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex004_Warp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction2_e_ex004_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_ActionEQSQuery;
    
    UTresAction2_e_ex004_Warp();
};

