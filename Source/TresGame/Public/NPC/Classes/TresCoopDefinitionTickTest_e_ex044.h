#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoopDefinitionTickTest_e_ex044.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresCoopDefinitionTickTest_e_ex044 : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UTresCoopDefinitionTickTest_e_ex044();
protected:
    UFUNCTION()
    bool IsReady(const FTresCoopDefinitionParamBP& Param) const;
    
};

