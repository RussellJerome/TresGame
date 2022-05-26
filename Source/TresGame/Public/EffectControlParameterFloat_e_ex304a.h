#pragma once
#include "CoreMinimal.h"
#include "EffectControlParameterFloat_e_ex304a.generated.h"

USTRUCT(BlueprintType)
struct FEffectControlParameterFloat_e_ex304a {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName EffectParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    float InterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float StartParam;
    
    UPROPERTY(EditDefaultsOnly)
    float EndParam;
    
    TRESGAME_API FEffectControlParameterFloat_e_ex304a();
};

