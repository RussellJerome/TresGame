#pragma once
#include "CoreMinimal.h"
#include "TresAfterImageVisibleWorker.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresAfterImageVisibleWorker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_VisibleEffectCmp;
    
public:
    TRESGAME_API FTresAfterImageVisibleWorker();
};

