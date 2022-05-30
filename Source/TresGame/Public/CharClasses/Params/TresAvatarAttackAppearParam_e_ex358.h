#pragma once
#include "CoreMinimal.h"
#include "TresAvatarAttackLocationTypeParam_e_ex358.h"
#include "ETresEnemyAvatarAttackAppearLocation_e_ex358.h"
#include "TresAvatarAttackAppearParam_e_ex358.generated.h"

USTRUCT(BlueprintType)
struct FTresAvatarAttackAppearParam_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyAvatarAttackAppearLocation_e_ex358::Type> LocationType;
    
    UPROPERTY(EditDefaultsOnly)
    FTresAvatarAttackLocationTypeParam_e_ex358 CustomLocationTypeParam;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableSyncTargetHeight: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float OffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float OffsetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float Distance;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableFixedLookAtAngle: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float FixedLookAtOffsetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float LookAtOffsetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bCalcAppearLocationDelayAfter: 1;
    
    TRESGAME_API FTresAvatarAttackAppearParam_e_ex358();
};

