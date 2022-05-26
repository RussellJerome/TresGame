#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointFilter.h"
#include "TresSpawnPointIDFilter.generated.h"

UCLASS(NonTransient)
class TRESGAME_API UTresSpawnPointIDFilter : public UTresSpawnPointFilter {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FName> m_ValidIDs;
    
    UPROPERTY()
    TArray<FName> m_InvalidIDs;
    
    UTresSpawnPointIDFilter();
};

