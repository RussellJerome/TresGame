#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyGenerator.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "TresGumiShipExternalEnemyGenerator.generated.h"

UCLASS()
class ATresGumiShipExternalEnemyGenerator : public ATresGumiShipEnemyGenerator {
    GENERATED_BODY()
public:
    ATresGumiShipExternalEnemyGenerator();
protected:
    UFUNCTION()
    void _OnGeneratedEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
};

