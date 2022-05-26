#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "AITestHumanEnemyPawn.generated.h"

UCLASS()
class AAITestHumanEnemyPawn : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    AAITestHumanEnemyPawn();
    UFUNCTION(Exec)
    void DebugSwitchBT(FName InName);
    
    UFUNCTION(Exec)
    void DebugSetDefaultBT();
    
};

