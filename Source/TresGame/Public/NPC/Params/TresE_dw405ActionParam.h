#pragma once
#include "CoreMinimal.h"
#include "TresE_dw405CounterAttackParam.h"
#include "ETresE_dw405VigilanceMoveVec.h"
#include "TresE_dw405SoundInfo.h"
#include "TresE_dw405AvatarActionParam.h"
#include "TresE_dw405RespawnParam.h"
#include "TresE_dw405ActionParam.generated.h"

class UAnimationAsset;
class UAnimSequenceBase;
class USoundBase;

USTRUCT(BlueprintType)
struct FTresE_dw405ActionParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName Name;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoLockOnRange;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableInvincible: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float GameLevelLimitTime[4];
    
    UPROPERTY(EditDefaultsOnly)
    float LimitOverDisappearRandomTIme;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableAppear: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float EndActionOffsetTime;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* SoundData;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableFixingAppearAngle: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float FixingAppearAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearHeight;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bAnimPlayFallEnd: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableVigilanceMove: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> MoveAngles;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveHomingAngle;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresE_dw405VigilanceMoveVec> VigilanceMoveVec;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableSettingDisappearTime: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float DisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableSettingDisappearRange: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float DisappearRange;
    
    UPROPERTY(EditDefaultsOnly)
    float DisappearDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableSettingAvatarDisappearRange: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float AvatarDisappearRange;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_dw405AvatarActionParam> AvatarAppearParam;
    
    UPROPERTY(EditDefaultsOnly)
    float TurnToTargetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float TurnToTargetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float TurnToTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FTresE_dw405RespawnParam RespawnParam;
    
    UPROPERTY(EditDefaultsOnly)
    float SoundPlayStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    FTresE_dw405SoundInfo SoundInfo;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_dw405CounterAttackParam> CounterAttackParam;
    
    UPROPERTY(EditDefaultsOnly)
    float CounterRate;
    
    TRESGAME_API FTresE_dw405ActionParam();
};

