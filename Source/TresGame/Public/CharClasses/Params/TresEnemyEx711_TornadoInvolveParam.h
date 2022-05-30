#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx711_TornadoInvolveParam.generated.h"

class ATresGimmick_e_ex711_PhysicsActor;

USTRUCT(BlueprintType)
struct FTresEnemyEx711_TornadoInvolveParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresGimmick_e_ex711_PhysicsActor* m_pActor;
    
    TRESGAME_API FTresEnemyEx711_TornadoInvolveParam();
};

