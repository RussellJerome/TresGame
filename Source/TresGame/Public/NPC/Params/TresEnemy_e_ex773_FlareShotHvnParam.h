#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex773_FlareShotHvnParam.generated.h"

class ATresProjectile_e_ex773_FlareShotTornado;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_FlareShotHvnParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectile_e_ex773_FlareShotTornado* m_FlareShot;
    
    TRESGAME_API FTresEnemy_e_ex773_FlareShotHvnParam();
};

