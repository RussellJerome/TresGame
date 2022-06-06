#pragma once
#include "CoreMinimal.h"
#include "TresEventPawnBase.h"
#include "TresEventSpotLightPawn.generated.h"

class USpotLightComponent;

UCLASS(Abstract)
class TRESGAME_API ATresEventSpotLightPawn : public ATresEventPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USpotLightComponent* MySpotLight;
    
    ATresEventSpotLightPawn();
};

