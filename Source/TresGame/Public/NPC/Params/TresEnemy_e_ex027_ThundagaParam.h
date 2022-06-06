#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex027_ThundagaParam.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex027_ThundagaParam {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_ThundagaEff;
    
    TRESGAME_API FTresEnemy_e_ex027_ThundagaParam();
};

