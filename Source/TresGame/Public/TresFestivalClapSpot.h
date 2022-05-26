#pragma once
#include "CoreMinimal.h"
#include "TresFestivalClapSpot.generated.h"

class UParticleSystemComponent;

USTRUCT()
struct FTresFestivalClapSpot {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_pPSC;
    
    TRESGAME_API FTresFestivalClapSpot();
};

