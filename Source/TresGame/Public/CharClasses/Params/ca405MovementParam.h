#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ca405MovementParam.generated.h"

USTRUCT(BlueprintType)
struct Fca405MovementParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_Param_MaelstromBaseCenter;
    
    UPROPERTY(EditAnywhere)
    float m_AngularAccel;
    
    UPROPERTY(EditAnywhere)
    float m_AngularBrake;
    
    UPROPERTY(EditAnywhere)
    float m_AngularFriction;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_AngularSpeedRange;
    
    TRESGAME_API Fca405MovementParam();
};

