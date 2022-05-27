#pragma once
#include "CoreMinimal.h"
#include "ETresActionTaskParamType.h"
#include "TresActionTaskParam.generated.h"

USTRUCT(BlueprintType)
struct FTresActionTaskParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName ParamName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ParamValue;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ETresActionTaskParamType ParamType;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bValueEditable;
    
    TRESGAME_API FTresActionTaskParam();
};

