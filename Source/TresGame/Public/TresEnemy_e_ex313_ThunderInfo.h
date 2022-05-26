#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex313_ThunderInfo.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex313_ThunderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_ThunderEff;
    
    TRESGAME_API FTresEnemy_e_ex313_ThunderInfo();
};

