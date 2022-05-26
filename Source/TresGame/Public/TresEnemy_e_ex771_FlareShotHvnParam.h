#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex771_FlareShotHvnParam.generated.h"

class ATresProjectile_e_ex771_FlareShotTornado;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_FlareShotHvnParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectile_e_ex771_FlareShotTornado* m_FlareShot;
    
    TRESGAME_API FTresEnemy_e_ex771_FlareShotHvnParam();
};

