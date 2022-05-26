#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSnowDepthTailActor.generated.h"

class UParticleSystemComponent;

UCLASS(Config=Game)
class ATresSnowDepthTailActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UParticleSystemComponent* ParticleSystemComponent;
    
    ATresSnowDepthTailActor();
};

