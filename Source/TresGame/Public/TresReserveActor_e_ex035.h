#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresReserveActor_e_ex035.generated.h"

class ATresEnemyPawn_e_ex035;
class ATresAIPoint_e_ex035;

UCLASS(HideDropdown)
class ATresReserveActor_e_ex035 : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresAIPoint_e_ex035* AIPoint;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex035* OwnerPawn;
    
public:
    ATresReserveActor_e_ex035();
};

