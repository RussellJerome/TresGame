#pragma once
#include "CoreMinimal.h"
#include "TresFieldAddProjectileParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FTresFieldAddProjectileParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float OffsetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float Distance;
    
    TRESGAME_API FTresFieldAddProjectileParam_e_ex357();
};

