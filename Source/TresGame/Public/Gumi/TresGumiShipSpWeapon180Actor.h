#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSpecialWeaponBaseActor.h"
#include "TresGumiShipSpWeapon180Actor.generated.h"

class UTresGumiShipBodyCollisionSetCompo;
class UTresGumiShipAtkCollisionSetCompo;

UCLASS(Abstract)
class ATresGumiShipSpWeapon180Actor : public ATresGumiShipSpecialWeaponBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PrimarySearchDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 InitialHP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SearchTime;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipBodyCollisionSetCompo* m_pBodyCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipAtkCollisionSetCompo* m_pAtkComllision;
    
public:
    ATresGumiShipSpWeapon180Actor();
};

