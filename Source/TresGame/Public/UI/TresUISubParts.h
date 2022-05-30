#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUISubParts.generated.h"

class UTresUIParts;

UCLASS(NonTransient)
class UTresUISubParts : public UTresASProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UTresUIParts* m_Owner;
    
public:
    UTresUISubParts();
};

