#pragma once
#include "CoreMinimal.h"
#include "TresUIActorMaterialParamSettingScalar.generated.h"

USTRUCT(BlueprintType)
struct FTresUIActorMaterialParamSettingScalar {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    TRESGAME_API FTresUIActorMaterialParamSettingScalar();
};

