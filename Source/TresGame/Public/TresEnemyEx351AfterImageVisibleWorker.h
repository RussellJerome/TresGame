#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx351AfterImageVisibleWorker.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresEnemyEx351AfterImageVisibleWorker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_VisibleEffectCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_WarpEffectCmp;
    
public:
    TRESGAME_API FTresEnemyEx351AfterImageVisibleWorker();
};

