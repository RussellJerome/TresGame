#pragma once
#include "CoreMinimal.h"
#include "TresComNpcReplaceMeshData.h"
#include "TresComNpcMeshSetDatas.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcMeshSetDatas {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_MeshName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcReplaceMeshData> m_MeshLists;
    
    TRESGAME_API FTresComNpcMeshSetDatas();
};

