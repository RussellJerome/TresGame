#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_KineDriverTargetDircns.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetDircns {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TargetObject;
    
    UPROPERTY()
    FName TargetObjectBoneName;
    
    UPROPERTY()
    int32 AimObject;
    
    UPROPERTY()
    FName AimObjectBoneName;
    
    UPROPERTY()
    int32 UpObject;
    
    UPROPERTY()
    FName UpObjectBoneName;
    
    UPROPERTY()
    FQuat NeutralRotate;
    
    UPROPERTY()
    FVector AimVector;
    
    UPROPERTY()
    FVector UpVector;
    
    UPROPERTY()
    FVector CrossVector;
    
    UPROPERTY()
    FVector AimSrcOffset;
    
    UPROPERTY()
    FVector UpSrcOffset;
    
    UPROPERTY()
    bool AimTransformAffect;
    
    UPROPERTY()
    bool UpTransformAffect;
    
    KINEDRIVERRT_API FSQEX_KineDriverTargetDircns();
};

