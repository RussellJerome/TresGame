#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx773_AttractBT04Param.generated.h"

class AActor;
class ATresActor_e_ex773_Attract;

USTRUCT(BlueprintType)
struct FTresEnemyEx773_AttractBT04Param {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresActor_e_ex773_Attract* m_pAttract;
    
    UPROPERTY()
    AActor* m_pTarget;
    
    TRESGAME_API FTresEnemyEx773_AttractBT04Param();
};

