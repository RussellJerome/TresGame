#pragma once
#include "CoreMinimal.h"
#include "EffectControlParameterVector_e_ex304a.h"
#include "EffectControlParameterFloat_e_ex304a.h"
#include "EffectControlParam_e_ex304a.generated.h"

USTRUCT(BlueprintType)
struct FEffectControlParam_e_ex304a {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float ChangeStartTimeRate;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEffectControlParameterVector_e_ex304a> VectorParamList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEffectControlParameterFloat_e_ex304a> FloatParamList;
    
    TRESGAME_API FEffectControlParam_e_ex304a();
};

