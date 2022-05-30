#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointScorer.h"
#include "UObject/NoExportTypes.h"
#include "TresSpawnPointDistanceScorer.generated.h"

UCLASS(NonTransient)
class TRESGAME_API UTresSpawnPointDistanceScorer : public UTresSpawnPointScorer {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector m_Position;
    
    UTresSpawnPointDistanceScorer();
};

