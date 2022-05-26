#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointFilter.h"
#include "TresSpawnPointOrFilter.generated.h"

UCLASS(NonTransient)
class TRESGAME_API UTresSpawnPointOrFilter : public UTresSpawnPointFilter {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UTresSpawnPointFilter*> m_Filters;
    
    UTresSpawnPointOrFilter();
};

