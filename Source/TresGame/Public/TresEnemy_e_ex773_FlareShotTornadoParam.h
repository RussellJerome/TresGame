#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex773_FlareShotTornadoParam.generated.h"

class UParticleSystemComponent;
class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_FlareShotTornadoParam {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_FireOmenEff;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresProjectileBase>> m_FlareShotArray;
    
    TRESGAME_API FTresEnemy_e_ex773_FlareShotTornadoParam();
};

