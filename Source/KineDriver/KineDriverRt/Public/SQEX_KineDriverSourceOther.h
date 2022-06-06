#pragma once
#include "CoreMinimal.h"
#include "SQEX_KineDriverSourceOther.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverSourceOther {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SourceObject;
    
    UPROPERTY()
    FName SourceObjectBoneName;
    
    KINEDRIVERRT_API FSQEX_KineDriverSourceOther();
};

