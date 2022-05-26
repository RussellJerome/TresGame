#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_KineDriverTargetRotate.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetRotate {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TargetObject;
    
    UPROPERTY()
    FName TargetObjectBoneName;
    
    UPROPERTY()
    int32 SourceQuat;
    
    UPROPERTY()
    float QuatWeight;
    
    UPROPERTY()
    bool AsQuatAngle;
    
    UPROPERTY()
    int32 BaseSpace;
    
    UPROPERTY()
    FName BaseSpaceBoneName;
    
    UPROPERTY()
    bool SegmentScaleCompensate;
    
    UPROPERTY()
    FQuat NeutralRotate;
    
    KINEDRIVERRT_API FSQEX_KineDriverTargetRotate();
};

