#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointMarker.h"
#include "TresSpawnPointManualCreatedMarker.generated.h"

UCLASS(NonTransient)
class TRESGAME_API ATresSpawnPointManualCreatedMarker : public ATresSpawnPointMarker {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Id;
    
    UPROPERTY(EditAnywhere)
    float m_Radius;
    
    UPROPERTY(EditAnywhere)
    float m_Height;
    
    ATresSpawnPointManualCreatedMarker();
};

