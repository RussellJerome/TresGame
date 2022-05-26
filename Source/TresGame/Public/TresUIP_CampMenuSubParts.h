#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_CampMenuSubParts.generated.h"

class UTresCampController;

UCLASS(NonTransient)
class UTresUIP_CampMenuSubParts : public UTresUISubParts {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UTresCampController* m_CampController;
    
public:
    UTresUIP_CampMenuSubParts();
};

