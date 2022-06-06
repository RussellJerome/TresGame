#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSpawnPointMarker.generated.h"

class ATresSpawnPointManagementVolume;

UCLASS(Transient)
class TRESGAME_API ATresSpawnPointMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresSpawnPointManagementVolume* m_ManagementVolume;
    
    ATresSpawnPointMarker();
};

