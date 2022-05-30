#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx711_ScaffoldParam.generated.h"

class AStaticMeshActor;

USTRUCT()
struct FTresEnemyEx711_ScaffoldParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    AStaticMeshActor* m_pActor;
    
    TRESGAME_API FTresEnemyEx711_ScaffoldParam();
};

