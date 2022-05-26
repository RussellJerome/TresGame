#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeComponentFootInitParams.h"
#include "SQEXSEADAutoSeComponentArmInitParams.h"
#include "SQEXSEADAutoSeComponentWingInitParams.h"
#include "SQEXSEADAutoSeComponentSwingInitParams.h"
#include "SQEXSEADAutoSeComponentBodyInitParams.h"
#include "SQEXSEADAutoSeComponentInitParams.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeComponentInitParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSQEXSEADAutoSeComponentFootInitParams> Feet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSQEXSEADAutoSeComponentArmInitParams> Arms;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSQEXSEADAutoSeComponentWingInitParams> Wings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSQEXSEADAutoSeComponentSwingInitParams> Swings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSQEXSEADAutoSeComponentBodyInitParams Body;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AutoCalcHeelRatio;
    
    FSQEXSEADAutoSeComponentInitParams();
};

