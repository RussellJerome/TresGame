#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointElement.h"
#include "TresSpawnPointManualCreated.generated.h"

USTRUCT()
struct TRESGAME_API FTresSpawnPointManualCreated {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Id;
    
    UPROPERTY(EditAnywhere)
    float m_Radius;
    
    UPROPERTY(EditAnywhere)
    float m_Height;
    
    UPROPERTY(EditAnywhere)
    FTresSpawnPointElement m_Element;
    
    FTresSpawnPointManualCreated();
};

