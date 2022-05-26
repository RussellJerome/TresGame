#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_KineDriverTargetOricns.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetOricns {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TargetObject;
    
    UPROPERTY()
    FName TargetObjectBoneName;
    
    UPROPERTY()
    FQuat OffsetRotate;
    
    UPROPERTY()
    TArray<int32> SourceArray;
    
    UPROPERTY()
    TArray<FName> SourceBoneNameArray;
    
    UPROPERTY()
    TArray<float> WeightArray;
    
    UPROPERTY()
    TArray<FQuat> OffsetArray;
    
    KINEDRIVERRT_API FSQEX_KineDriverTargetOricns();
};

