#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction4_e_ex101_Escape.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction4_e_ex101_Escape : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_FallLength;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
public:
    UTresAction4_e_ex101_Escape();
};

