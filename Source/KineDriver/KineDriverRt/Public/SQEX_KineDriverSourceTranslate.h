#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_KineDriverSourceTranslate.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverSourceTranslate {
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
    FVector NeutralTranslate;
    
    UPROPERTY()
    FQuat NeutralRotate;
    
    KINEDRIVERRT_API FSQEX_KineDriverSourceTranslate();
};

