#pragma once
#include "CoreMinimal.h"
#include "TresAction_EnemyShipBase_Artillery.h"
#include "TresAction_EnemyShipBase_ArtilleryFront.generated.h"

UCLASS(HideDropdown)
class UTresAction_EnemyShipBase_ArtilleryFront : public UTresAction_EnemyShipBase_Artillery {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_FrontSocketNames;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_EnableDelayForIterateSocket;
    
public:
    UTresAction_EnemyShipBase_ArtilleryFront();
};

