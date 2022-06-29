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
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName m_GrpName;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETresCollision::Type> ShapeType;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector Size;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRotator RelativeRocation;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    TRESGAME_API FTresCollShapeAssetUnit();
};

