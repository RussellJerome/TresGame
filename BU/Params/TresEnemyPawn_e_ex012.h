#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex012.generated.h"

UCLASS()
class ATresEnemyPawn_e_ex012 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresEnemyPawnBase* m_TopAttachPawn;
    
    ATresEnemyPawn_e_ex012();
};

