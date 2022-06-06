#pragma once
#include "CoreMinimal.h"
#include "PairChangeActionParam.generated.h"

USTRUCT(BlueprintType)
struct FPairChangeActionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName spinMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName stepMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float changeDirectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName pcSpinMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float pcSpinChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float pcSpinWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName pcStepMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float pcStepChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float pcStepWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 effectGroupID;
    
    TRESGAME_API FPairChangeActionParam();
};

