#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx761_Location.h"
#include "GameFramework/Actor.h"
#include "TresHomeLocationActor_e_ex761.generated.h"

UCLASS()
class ATresHomeLocationActor_e_ex761 : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<ETresEnemyEx761_Location::Type> m_LocationType;
    
public:
    ATresHomeLocationActor_e_ex761();
};

