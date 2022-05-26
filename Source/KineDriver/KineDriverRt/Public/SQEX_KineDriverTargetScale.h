#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_KineDriverTargetScale.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetScale {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TargetObject;
    
    UPROPERTY()
    FName TargetObjectBoneName;
    
    UPROPERTY()
    FVector Scale;
    
    UPROPERTY()
    bool ClampZero;
    
    UPROPERTY()
    int32 BaseSpace;
    
    UPROPERTY()
    FName BaseSpaceBoneName;
    
    UPROPERTY()
    bool SegmentScaleCompensate;
    
    KINEDRIVERRT_API FSQEX_KineDriverTargetScale();
};

