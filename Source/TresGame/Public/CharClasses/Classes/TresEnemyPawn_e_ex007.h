#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex007.generated.h"

UCLASS()
class ATresEnemyPawn_e_ex007 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    ATresEnemyPawn_e_ex007();
    UFUNCTION(BlueprintPure)
    bool IsCoopMode() const;
    
};

