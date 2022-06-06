#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyShip.h"
#include "TresEnemyShipCoreSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyShipCoreSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_SocketName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresEnemyShip::Type> m_LocType;
    
    TRESGAME_API FTresEnemyShipCoreSpawnData();
};

