#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresLinkActor_e_ex044_MoveLocation.generated.h"

class ATresEnemyPawn_e_ex044;

UCLASS()
class ATresLinkActor_e_ex044_MoveLocation : public AActor {
    GENERATED_BODY()
public:
    ATresLinkActor_e_ex044_MoveLocation();
    UFUNCTION(BlueprintCallable)
    void SetAvailable(bool Set, ATresEnemyPawn_e_ex044* pPawn);
    
    UFUNCTION(BlueprintPure)
    bool IsAvailable();
    
};

