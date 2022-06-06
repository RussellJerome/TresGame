#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEAD_BGMStoreBehaviour.h"
#include "ESQEXSEAD_BGMStopBehaviour.h"
#include "SQEXSEAD_BGMOptions.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEAD_BGMOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite)
    ESQEXSEAD_BGMStoreBehaviour StoreBehaviour;
    
    UPROPERTY(BlueprintReadWrite)
    ESQEXSEAD_BGMStopBehaviour StopBehaviour;
    
    UPROPERTY(BlueprintReadWrite)
    float PlayFadeInTime;
    
    UPROPERTY(BlueprintReadWrite)
    float ResumeFadeInTime;
    
    UPROPERTY(BlueprintReadWrite)
    float SuspendFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite)
    float StopFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite)
    float StaySuspendTime;
    
    UPROPERTY(BlueprintReadWrite)
    bool bUnreferenceAsset;
    
    UPROPERTY(BlueprintReadWrite)
    bool bRestoreAfterFinish;
    
    SQEXSEAD_API FSQEXSEAD_BGMOptions();
};

