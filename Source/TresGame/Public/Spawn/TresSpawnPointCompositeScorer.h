#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointScorer.h"
#include "TresSpawnPointCompositeScorer.generated.h"

UCLASS(NonTransient)
class TRESGAME_API UTresSpawnPointCompositeScorer : public UTresSpawnPointScorer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UTresSpawnPointScorer*> m_Scorers;
    
    UPROPERTY()
    TArray<float> m_Factors;
    
    UTresSpawnPointCompositeScorer();
};

