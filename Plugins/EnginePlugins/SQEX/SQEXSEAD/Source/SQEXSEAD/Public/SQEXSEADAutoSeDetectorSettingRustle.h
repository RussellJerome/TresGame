#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectorSettingRustle.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeDetectorSettingRustle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideElbowRustleVolumeRangesWalk;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ElbowRustleVolumeRangeWalkMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ElbowRustleVolumeRangeWalkMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideElbowRustleVolumeRangesRun;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ElbowRustleRelativeVelocityForNmlVolumeRangeRunMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ElbowRustleRelativeVelocityForNmlVolumeRangeRunMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ElbowRustleVolumeRangeRunMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ElbowRustleVolumeRangeRunMax;
    
    FSQEXSEADAutoSeDetectorSettingRustle();
};

