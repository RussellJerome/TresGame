#pragma once
#include "CoreMinimal.h"
#include "TresRaFestivalReplaceMeshData.generated.h"

class USkeletalMesh;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FTresRaFestivalReplaceMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USkeletalMesh* m_MeshData;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_MatData;
    
    TRESGAME_API FTresRaFestivalReplaceMeshData();
};

