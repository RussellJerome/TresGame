#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MerSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class MERCUNA_API UMerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float DebugLengthScale;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAlwaysShowErrors;
    
    UPROPERTY(Config, EditAnywhere)
    float CellSize;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MinPawnRadius;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxPawnRadius;
    
    UMerSettings();
};

