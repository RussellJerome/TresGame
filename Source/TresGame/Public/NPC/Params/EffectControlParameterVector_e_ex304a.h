#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EffectControlParameterVector_e_ex304a.generated.h"

USTRUCT(BlueprintType)
struct FEffectControlParameterVector_e_ex304a {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName EffectParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    float InterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector StartParam;
    
    UPROPERTY(EditDefaultsOnly)
    FVector EndParam;
    
    TRESGAME_API FEffectControlParameterVector_e_ex304a();
};

