#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex351_Warp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction1_e_ex351_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_ActionEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bAfterImageWarp: 1;
    
    UTresAction1_e_ex351_Warp();
};

