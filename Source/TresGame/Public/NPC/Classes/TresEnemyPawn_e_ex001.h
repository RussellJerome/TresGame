#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex001.generated.h"

UCLASS()
class ATresEnemyPawn_e_ex001 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    ATresEnemyPawn_e_ex001();
    UFUNCTION(BlueprintCallable)
    void StopShadowSpawn();
    
};

