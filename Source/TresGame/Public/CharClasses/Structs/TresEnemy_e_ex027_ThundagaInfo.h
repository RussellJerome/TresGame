#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex027_ThundagaInfo.generated.h"

class UParticleSystemComponent;

USTRUCT()
struct FTresEnemy_e_ex027_ThundagaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_ThundagaEff;
    
    TRESGAME_API FTresEnemy_e_ex027_ThundagaInfo();
};

