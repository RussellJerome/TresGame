#pragma once
#include "CoreMinimal.h"
#include "TresAttackParam_e_ex322a.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FTresAttackParam_e_ex322a {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float ActionStartDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float SpeedAutoCorrectionRate;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float LandAppearOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float AirAppearOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearHomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float Acceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float Deceleration;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableGravity: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsAerial: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearLocationCorrectionRate;
    
    TRESGAME_API FTresAttackParam_e_ex322a();
};

