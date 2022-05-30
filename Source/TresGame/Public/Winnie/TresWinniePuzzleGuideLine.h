#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleGuideLine.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleGuideLine : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* Particle;
    
    UPROPERTY(EditDefaultsOnly)
    float StartDistanceOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float EndDistanceOffset;
    
private:
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UParticleSystemComponent>> m_particles;
    
public:
    UTresWinniePuzzleGuideLine();
};

