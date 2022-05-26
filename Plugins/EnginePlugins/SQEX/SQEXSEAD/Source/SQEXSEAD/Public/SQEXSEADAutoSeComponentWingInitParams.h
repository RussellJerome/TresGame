#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeComponentWingInitParams.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeComponentWingInitParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName WingRootName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName WingEdgeName;
    
    FSQEXSEADAutoSeComponentWingInitParams();
};

