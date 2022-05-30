#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointFilter.h"
#include "TresSpawnPointAndFilter.generated.h"

UCLASS(NonTransient)
class TRESGAME_API UTresSpawnPointAndFilter : public UTresSpawnPointFilter {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UTresSpawnPointFilter*> m_Filters;
    
    UTresSpawnPointAndFilter();
};

