#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointElement.h"
#include "TresSpawnPointSet.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresSpawnPointSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Id;
    
    UPROPERTY(EditAnywhere)
    float m_Radius;
    
    UPROPERTY(EditAnywhere)
    float m_Height;
    
    UPROPERTY()
    TArray<FTresSpawnPointElement> m_Elements;
    
    FTresSpawnPointSet();
};

