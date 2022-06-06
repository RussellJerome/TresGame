#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex771_AirRecovery.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction2_e_ex771_AirRecovery : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
public:
    UTresAction2_e_ex771_AirRecovery();
};

