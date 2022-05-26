#pragma once
#include "CoreMinimal.h"
#include "TresCharState_EnemyFlow.h"
#include "TresPlayerState_EnemyFlow.generated.h"

class AActor;
class UPrimitiveComponent;
class ATresCharPawnBase;

UCLASS()
class UTresPlayerState_EnemyFlow : public UTresCharState_EnemyFlow {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_pHitActor;
    
    UPROPERTY(Export)
    UPrimitiveComponent* m_pHitComponent;
    
    UPROPERTY()
    ATresCharPawnBase* m_pEnemyTurn;
    
    UTresPlayerState_EnemyFlow();
};

