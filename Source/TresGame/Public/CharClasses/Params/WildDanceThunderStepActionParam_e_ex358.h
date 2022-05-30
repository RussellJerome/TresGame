#pragma once
#include "CoreMinimal.h"
#include "WildDanceActionParamBase_e_ex358.h"
#include "ETresEnemyWildDanceWarpHeight_e_ex358.h"
#include "WildDanceThunderStepActionParam_e_ex358.generated.h"

UCLASS(EditInlineNew)
class UWildDanceThunderStepActionParam_e_ex358 : public UWildDanceActionParamBase_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsBaseLocationOverrideMapCenterLocation: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float OffsetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableNextAttackAppearDistance: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float Distance;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyWildDanceWarpHeight_e_ex358::Type> AppearHeightType;
    
    UPROPERTY(EditDefaultsOnly)
    float Height;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bDisableLocationVelocityOffset: 1;
    
    UWildDanceThunderStepActionParam_e_ex358();
};

