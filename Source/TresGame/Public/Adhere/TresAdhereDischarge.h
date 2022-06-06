#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAdhereObjBase.h"
#include "TresAdhereDischarge.generated.h"

class UTresChrDataTableSet;
class ATresProj_BadStatDischarge;

UCLASS()
class ATresAdhereDischarge : public ATresAdhereObjBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UTresChrDataTableSet* m_pDataTableSet;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CheckRange;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProj_BadStatDischarge> m_GenerateClass;
    
public:
    ATresAdhereDischarge();
};

