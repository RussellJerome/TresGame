#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresTaskClassListExecuter.generated.h"

class UTresTaskExecuterBase;

UCLASS()
class UTresTaskClassListExecuter : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UTresTaskExecuterBase* m_pTaskExecuter;
    
public:
    UTresTaskClassListExecuter();
};

