#pragma once
#include "CoreMinimal.h"
#include "SQEX_KineDriverTargetOther.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetOther {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString SubType;
    
    UPROPERTY()
    TArray<FName> ParamNames;
    
    UPROPERTY()
    TArray<float> Params;
    
    KINEDRIVERRT_API FSQEX_KineDriverTargetOther();
};

