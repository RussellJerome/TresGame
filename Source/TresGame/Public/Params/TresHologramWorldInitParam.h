#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETresWorldCode.h"
#include "EHologramWorldInitParamValueType.h"
#include "UObject/NoExportTypes.h"
#include "TresHologramWorldInitParam.generated.h"

USTRUCT(BlueprintType)
struct FTresHologramWorldInitParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresWorldCode> World;
    
    UPROPERTY(EditAnywhere)
    FName MapId;
    
    UPROPERTY(EditAnywhere)
    EHologramWorldInitParamValueType ValueType;
    
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    float FloatValue;
    
    UPROPERTY(EditAnywhere)
    FVector VectorValue;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ColorValue;
    
    TRESGAME_API FTresHologramWorldInitParam();
};

