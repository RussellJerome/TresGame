#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresEnemyShip.h"
#include "TresEnemyShipBTDecorator_IsAliveShipCore.generated.h"

UCLASS()
class UTresEnemyShipBTDecorator_IsAliveShipCore : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresEnemyShip::Type> m_LocType;
    
    UTresEnemyShipBTDecorator_IsAliveShipCore();
};

