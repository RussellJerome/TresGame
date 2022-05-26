#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_KineDriverSourceRotate.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverSourceRotate {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> SourceArray;
    
    UPROPERTY()
    TArray<FName> SourceBoneNameArray;
    
    UPROPERTY()
    TArray<float> WeightArray;
    
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
    
    KINEDRIVERRT_API FSQEX_KineDriverSourceRotate();
};

