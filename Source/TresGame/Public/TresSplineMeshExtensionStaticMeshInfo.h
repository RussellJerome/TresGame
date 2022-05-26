#pragma once
#include "CoreMinimal.h"
#include "TresSplineMeshExtensionStaticMeshInfo.generated.h"

class UStaticMesh;
class ASQEX_SplineActor;

USTRUCT(BlueprintType)
struct FTresSplineMeshExtensionStaticMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ASQEX_SplineActor* spline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool isReverseMeshFront;
    
    TRESGAME_API FTresSplineMeshExtensionStaticMeshInfo();
};

