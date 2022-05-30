#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction4_e_ex361_Warp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction4_e_ex361_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
public:
    UTresAction4_e_ex361_Warp();
};

