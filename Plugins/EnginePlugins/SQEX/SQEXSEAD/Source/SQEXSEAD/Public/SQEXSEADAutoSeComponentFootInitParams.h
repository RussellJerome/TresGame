#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeComponentFootInitParams.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeComponentFootInitParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FemurName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName TibiaName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FootName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName HeelName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ToeName;
    
    FSQEXSEADAutoSeComponentFootInitParams();
};

