#pragma once
#include "CoreMinimal.h"
#include "PDControllerScalar.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FPDControllerScalar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Gain;
    
    FPDControllerScalar();
};

