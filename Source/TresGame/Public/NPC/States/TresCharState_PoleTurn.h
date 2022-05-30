#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresCharState_PoleTurn.generated.h"

class AActor;
class USceneComponent;

UCLASS()
class UTresCharState_PoleTurn : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_pHitActor;
    
    UPROPERTY(Export)
    USceneComponent* m_pHitComponent;
    
    UTresCharState_PoleTurn();
};

