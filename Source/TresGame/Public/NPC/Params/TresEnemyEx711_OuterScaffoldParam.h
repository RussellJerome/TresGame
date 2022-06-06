#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx711_OuterScaffoldParam.generated.h"

class ATresGimmick_e_ex711_PhysicsActor;

USTRUCT(BlueprintType)
struct FTresEnemyEx711_OuterScaffoldParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresGimmick_e_ex711_PhysicsActor* m_pActor;
    
    TRESGAME_API FTresEnemyEx711_OuterScaffoldParam();
};

