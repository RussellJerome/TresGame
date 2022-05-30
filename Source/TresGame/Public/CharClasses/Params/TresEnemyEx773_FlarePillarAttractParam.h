#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx773_FlarePillarAttractParam.generated.h"

class AActor;
class ATresActor_e_ex773_Attract;

USTRUCT(BlueprintType)
struct FTresEnemyEx773_FlarePillarAttractParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresActor_e_ex773_Attract* m_pAttract;
    
    UPROPERTY()
    AActor* m_pTarget;
    
    TRESGAME_API FTresEnemyEx773_FlarePillarAttractParam();
};

