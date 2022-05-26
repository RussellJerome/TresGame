#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointFilter.h"
#include "TresSpawnPointAvoidActorFilter.generated.h"

UCLASS(NonTransient)
class TRESGAME_API UTresSpawnPointAvoidActorFilter : public UTresSpawnPointFilter {
    GENERATED_BODY()
public:
    UPROPERTY()
    float m_Radius;
    
    UTresSpawnPointAvoidActorFilter();
};

