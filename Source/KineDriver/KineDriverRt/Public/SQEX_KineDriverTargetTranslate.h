#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_KineDriverTargetTranslate.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetTranslate {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TargetObject;
    
    UPROPERTY()
    FName TargetObjectBoneName;
    
    UPROPERTY()
    FVector Translate;
    
    UPROPERTY()
    int32 BaseSpace;
    
    UPROPERTY()
    FName BaseSpaceBoneName;
    
    UPROPERTY()
    FVector NeutralTranslate;
    
    UPROPERTY()
    FQuat NeutralRotate;
    
    KINEDRIVERRT_API FSQEX_KineDriverTargetTranslate();
};

