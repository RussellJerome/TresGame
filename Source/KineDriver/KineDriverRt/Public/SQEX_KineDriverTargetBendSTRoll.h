#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_KineDriverTargetBendSTRoll.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetBendSTRoll {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TargetObject;
    
    UPROPERTY()
    FName TargetObjectBoneName;
    
    UPROPERTY()
    float BendS;
    
    UPROPERTY()
    float BendT;
    
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
    
    UPROPERTY()
    FVector UpVector;
    
    UPROPERTY()
    FVector CrossVector;
    
    KINEDRIVERRT_API FSQEX_KineDriverTargetBendSTRoll();
};

