#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx711_Flotation.generated.h"

class AStaticMeshActor;

USTRUCT()
struct FTresEnemyEx711_Flotation {
    GENERATED_BODY()
public:
    UPROPERTY()
    AStaticMeshActor* m_pActor;
    
    TRESGAME_API FTresEnemyEx711_Flotation();
};

