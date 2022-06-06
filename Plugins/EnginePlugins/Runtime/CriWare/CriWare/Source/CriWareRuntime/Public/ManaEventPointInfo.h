#pragma once
#include "CoreMinimal.h"
#include "ManaEventPointInfo.generated.h"

USTRUCT(BlueprintType)
struct FManaEventPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Time;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Type;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Parameter;
    
    CRIWARERUNTIME_API FManaEventPointInfo();
};

