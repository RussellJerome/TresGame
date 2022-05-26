#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_KineDriverTargetPoscns.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetPoscns {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TargetObject;
    
    UPROPERTY()
    FName TargetObjectBoneName;
    
    UPROPERTY()
    bool OrientAffect;
    
    UPROPERTY()
    bool ScaleAffect;
    
    UPROPERTY()
    FVector OffsetTranslate;
    
    UPROPERTY()
    TArray<int32> SourceArray;
    
    UPROPERTY()
    TArray<FName> SourceBoneNameArray;
    
    UPROPERTY()
    TArray<float> WeightArray;
    
    UPROPERTY()
    TArray<FVector> OffsetArray;
    
    KINEDRIVERRT_API FSQEX_KineDriverTargetPoscns();
};

