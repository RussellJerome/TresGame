#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresTornadoDebrisTransformInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresTornadoDebrisTransformInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float DebrisLocation_R;
    
    UPROPERTY(EditDefaultsOnly)
    float DebrisLocation_P;
    
    UPROPERTY(EditDefaultsOnly)
    float DebrisLocation_H;
    
    UPROPERTY(EditDefaultsOnly)
    float DebrisLocation_TargetHeightRate;
    
    UPROPERTY(EditDefaultsOnly)
    float RevolveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator RotateSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float Amplitude;
    
    UPROPERTY(EditDefaultsOnly)
    float Frequency;
    
    UPROPERTY(EditDefaultsOnly)
    float StateMoveVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDestinationEffect;
    
    TRESGAME_API FTresTornadoDebrisTransformInfo();
};

