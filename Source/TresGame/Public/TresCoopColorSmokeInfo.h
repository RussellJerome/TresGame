#pragma once
#include "CoreMinimal.h"
#include "ETresCoopColorSmokeKind.h"
#include "TresCoopColorSmokeInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresCoopColorSmokeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    ETresCoopColorSmokeKind m_Color;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pSmokeEffect;
    
    TRESGAME_API FTresCoopColorSmokeInfo();
};

