#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx771_FlareAttractParam.generated.h"

class ATresActor_e_ex771_Attract;
class AActor;

USTRUCT(BlueprintType)
struct FTresEnemyEx771_FlareAttractParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresActor_e_ex771_Attract* m_pAttract;
    
    UPROPERTY()
    AActor* m_pTarget;
    
    TRESGAME_API FTresEnemyEx771_FlareAttractParam();
};

