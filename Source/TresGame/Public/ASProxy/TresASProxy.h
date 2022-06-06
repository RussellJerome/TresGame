#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresASProxy.generated.h"

class UGFxObject;

UCLASS(Transient)
class UTresASProxy : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGFxObject* m_ASObject;
    
public:
    UTresASProxy();
};

