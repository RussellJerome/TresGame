#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex773_FlareShotHvnParam.h"
#include "TresEnemy_e_ex773_FlareShotHvnGroupParam.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_FlareShotHvnGroupParam {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_FireOmenEff;
    
    UPROPERTY()
    TArray<FTresEnemy_e_ex773_FlareShotHvnParam> m_FlareShotHvnParamArray;
    
    TRESGAME_API FTresEnemy_e_ex773_FlareShotHvnGroupParam();
};

