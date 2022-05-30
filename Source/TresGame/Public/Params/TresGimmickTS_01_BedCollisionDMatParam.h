#pragma once
#include "CoreMinimal.h"
#include "TresGimmickTS_01_BedCollisionDMatParam.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FTresGimmickTS_01_BedCollisionDMatParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_DynamicMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* m_DynamicMaterial;
    
    TRESGAME_API FTresGimmickTS_01_BedCollisionDMatParam();
};

