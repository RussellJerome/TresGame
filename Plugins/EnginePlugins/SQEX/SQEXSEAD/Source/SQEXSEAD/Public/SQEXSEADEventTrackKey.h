#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADEventTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADEventTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Time;
    
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    SQEXSEAD_API FSQEXSEADEventTrackKey();
};

