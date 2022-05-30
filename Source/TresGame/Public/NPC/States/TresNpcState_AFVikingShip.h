#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFVikingShip.h"
#include "TresNpcState_AFVikingShip.generated.h"

class AActor;

UCLASS()
class UTresNpcState_AFVikingShip : public UTresCharState_AFVikingShip {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_pAttachActor;
    
    UTresNpcState_AFVikingShip();
};

