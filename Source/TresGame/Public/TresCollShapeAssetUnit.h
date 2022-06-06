#pragma once
#include "CoreMinimal.h"
#include "ETresCollision.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresCollShapeAssetUnit.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FTresCollShapeAssetUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName m_GrpName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresCollision::Type> ShapeType;
    
    UPROPERTY(EditAnywhere)
    FVector Size;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator RelativeRocation;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* Mesh;
    
    TRESGAME_API FTresCollShapeAssetUnit();
};

