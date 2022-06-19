#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSplineParticleActor.generated.h"

class UParticleSystem;
class USplineComponent;

UCLASS()
class ATresSplineParticleActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnDistance;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bEnableSplineRotation: 1;
    
    UPROPERTY(Export)
    USplineComponent* m_SplineComponent;
    
public:
    ATresSplineParticleActor();
};

