#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "TresMovementComponentPostPhysicsTickFunction.h"
#include "TresMovementComponentBase.generated.h"

class ATresPawnBase;

UCLASS(Abstract, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresMovementComponentBase : public UPawnMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresPawnBase* CharacterOwner;
    
public:
    UPROPERTY()
    FTresMovementComponentPostPhysicsTickFunction m_PostPhysicsTickFunction;
    
    UTresMovementComponentBase();
};

