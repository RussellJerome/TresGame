#pragma once
#include "CoreMinimal.h"
#include "StoleTrapWorkData.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FStoleTrapWorkData {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_PointEffectComp;
    
    TRESGAME_API FStoleTrapWorkData();
};

