#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyPawnBase.h"
#include "TresGumiShipBossEnemyPawnBase.generated.h"

UCLASS(Abstract)
class ATresGumiShipBossEnemyPawnBase : public ATresGumiShipEnemyPawnBase {
    GENERATED_BODY()
public:
    ATresGumiShipBossEnemyPawnBase();
    UFUNCTION(BlueprintCallable)
    bool SupportEnemyDisappearRequest(int32 UsingEnemyGeneratorIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GenerateSupportEnemy(int32 UsingEnemyGeneratorIndex);
    
};

