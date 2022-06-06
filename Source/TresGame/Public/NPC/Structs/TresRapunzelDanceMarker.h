#pragma once
#include "CoreMinimal.h"
#include "EDancePerformType.h"
#include "UObject/NoExportTypes.h"
#include "TresRapunzelDanceMarker.generated.h"

class UParticleSystemComponent;

USTRUCT()
struct FTresRapunzelDanceMarker {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    EDancePerformType m_PerformType;
    
    UPROPERTY(VisibleInstanceOnly)
    float m_Length;
    
    UPROPERTY(VisibleInstanceOnly)
    FVector m_Location;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pPSC;
    
    TRESGAME_API FTresRapunzelDanceMarker();
};

