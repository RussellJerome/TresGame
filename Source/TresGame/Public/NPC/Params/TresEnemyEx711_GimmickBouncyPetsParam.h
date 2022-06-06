#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx711_GimmickBouncyPetsParam.generated.h"

class ATresGimmickTsBouncyPet;

USTRUCT(BlueprintType)
struct FTresEnemyEx711_GimmickBouncyPetsParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresGimmickTsBouncyPet* m_pActor;
    
    TRESGAME_API FTresEnemyEx711_GimmickBouncyPetsParam();
};

