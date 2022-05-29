#pragma once
#include "CoreMinimal.h"
#include "TresEnvQueryGenerator_OnRingSurface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "SQEXSEADAutoSeControlTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeControlTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseGlobalEnable: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bGlobalEnable: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseEnable: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnable: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseVolumeScale: 1;
    
    UPROPERTY(EditAnywhere)
    float VolumeScale;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseDisableAnimNotifyPlayAutoSE: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisableAnimNotifyPlayAutoSE: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseEnableForceOverridePhysicalSurface: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableForceOverridePhysicalSurface: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPhysicalSurface> PhysicalSurfaceForForceOverride;
    
    UPROPERTY(EditAnywhere)
    bool bUseAssumeFootMotionlessMoveLength;
    
    UPROPERTY(EditAnywhere)
    float AssumeFootMotionlessMoveLength;
    
    SQEXSEAD_API FSQEXSEADAutoSeControlTrackKey();
};

