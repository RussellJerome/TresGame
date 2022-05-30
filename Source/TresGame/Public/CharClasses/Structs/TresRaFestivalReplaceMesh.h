#pragma once
#include "CoreMinimal.h"
#include "TresRaFestivalReplaceMeshData.h"
#include "TresRaFestivalReplaceMesh.generated.h"

USTRUCT(BlueprintType)
struct FTresRaFestivalReplaceMesh {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_MeshName;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRaFestivalReplaceMeshData> m_MeshLists;
    
    TRESGAME_API FTresRaFestivalReplaceMesh();
};

