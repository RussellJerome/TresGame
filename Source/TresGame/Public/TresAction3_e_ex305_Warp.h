#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex305_Warp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction3_e_ex305_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_ActionEQSQuery;
    
public:
    UTresAction3_e_ex305_Warp();
};

