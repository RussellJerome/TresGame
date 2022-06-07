#pragma once
#include "CoreMinimal.h"
#include "SQEX_KineDriverTargetOther.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetOther {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ParamNames;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Params;
    
    KINEDRIVERRT_API FSQEX_KineDriverTargetOther();
};

