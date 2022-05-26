#pragma once
#include "CoreMinimal.h"
#include "EQS_PARAM_VALUE_Enum.h"
#include "EQS_PARAM_NAME_Enum.h"
#include "Tres_EQS_ParamName.generated.h"

USTRUCT(BlueprintType)
struct FTres_EQS_ParamName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EQS_PARAM_NAME_Enum m_Name;
    
    UPROPERTY(EditAnywhere)
    float m_Value;
    
    UPROPERTY(EditAnywhere)
    float m_RandomValue;
    
    UPROPERTY(EditAnywhere)
    EQS_PARAM_VALUE_Enum m_EnumValue;
    
    TRESGAME_API FTres_EQS_ParamName();
};

