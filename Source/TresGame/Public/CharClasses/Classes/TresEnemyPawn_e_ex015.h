#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex015.generated.h"

UCLASS()
class ATresEnemyPawn_e_ex015 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    ATresEnemyPawn_e_ex015();
    UFUNCTION(BlueprintPure)
    FRotator BP_GetAnimOffsetValue() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetAnimOffsetAlpha() const;
    
};

