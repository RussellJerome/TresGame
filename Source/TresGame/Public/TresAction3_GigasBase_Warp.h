#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_GigasBase_Warp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction3_GigasBase_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bDestination;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_ActionEQSQuery;
    
    UTresAction3_GigasBase_Warp();
};

