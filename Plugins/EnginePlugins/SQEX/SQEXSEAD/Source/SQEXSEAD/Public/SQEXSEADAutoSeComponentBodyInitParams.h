#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeComponentBodyInitParams.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeComponentBodyInitParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BaseName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName WaistName;
    
    FSQEXSEADAutoSeComponentBodyInitParams();
};

