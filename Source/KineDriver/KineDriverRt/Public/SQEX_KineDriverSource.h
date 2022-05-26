#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_KineDriverSource.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Source0;
    
    UPROPERTY()
    FName SourceBoneName0;
    
    UPROPERTY()
    int32 Source1;
    
    UPROPERTY()
    FName SourceBoneName1;
    
    UPROPERTY()
    float BlendWeight;
    
    UPROPERTY()
    int32 BaseSpace;
    
    UPROPERTY()
    FName BaseSpaceBoneName;
    
    UPROPERTY()
    FVector NeutralTranslate;
    
    UPROPERTY()
    FQuat NeutralRotate;
    
    UPROPERTY()
    FVector AimVector;
    
    UPROPERTY()
    FVector UpVector;
    
    UPROPERTY()
    FVector CrossVector;
    
    KINEDRIVERRT_API FSQEX_KineDriverSource();
};

