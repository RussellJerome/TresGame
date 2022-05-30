#pragma once
#include "CoreMinimal.h"
#include "TresUIActorMaterialParamSettingCoefficient.generated.h"

USTRUCT(BlueprintType)
struct FTresUIActorMaterialParamSettingCoefficient {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    TRESGAME_API FTresUIActorMaterialParamSettingCoefficient();
};

