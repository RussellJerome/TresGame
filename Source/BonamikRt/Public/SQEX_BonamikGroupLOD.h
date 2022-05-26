#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikGroupLOD.generated.h"

USTRUCT(BlueprintType)
struct BONAMIKRT_API FSQEX_BonamikGroupLOD {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> Groups;
    
    UPROPERTY(EditAnywhere)
    float MinSize;
    
    UPROPERTY(EditAnywhere)
    float BlendTime;
    
    UPROPERTY(EditAnywhere)
    float PrerollTime;
    
    FSQEX_BonamikGroupLOD();
};

