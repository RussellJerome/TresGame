#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_KineDriverTargetBendRoll.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetBendRoll {
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
    float Roll;
    
    UPROPERTY()
    int32 BaseSpace;
    
    UPROPERTY()
    FName BaseSpaceBoneName;
    
    UPROPERTY()
    bool SegmentScaleCompensate;
    
    UPROPERTY()
    FQuat NeutralRotate;
    
    UPROPERTY()
    FVector AimVector;
    
    KINEDRIVERRT_API FSQEX_KineDriverTargetBendRoll();
};

