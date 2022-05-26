#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSplineParticleActor_e_ex046.generated.h"

class UParticleSystem;
class USplineComponent;

UCLASS()
class ATresSplineParticleActor_e_ex046 : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnDistance;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableSplineRotation: 1;
    
    UPROPERTY(Export)
    USplineComponent* m_SplineComponent;
    
public:
    ATresSplineParticleActor_e_ex046();
};

