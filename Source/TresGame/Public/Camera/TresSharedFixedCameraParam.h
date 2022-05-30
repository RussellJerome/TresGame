#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresSharedFixedCameraParam.generated.h"

USTRUCT(BlueprintType)
struct FTresSharedFixedCameraParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float FieldOfView;
    
    UPROPERTY(EditDefaultsOnly)
    FVector WorldLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator WorldRotation;
    
    TRESGAME_API FTresSharedFixedCameraParam();
};

