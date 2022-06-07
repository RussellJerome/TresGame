#pragma once
#include "CoreMinimal.h"
#include "SQEX_KineDriverSourceOther.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverSourceOther {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceObjectBoneName;
    
    KINEDRIVERRT_API FSQEX_KineDriverSourceOther();
};

