#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex771_HvnDebrisParam.generated.h"

class ATresProjectile_e_ex771_DebrisAttract;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_HvnDebrisParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectile_e_ex771_DebrisAttract* m_DebrisAttract;
    
    TRESGAME_API FTresEnemy_e_ex771_HvnDebrisParam();
};

