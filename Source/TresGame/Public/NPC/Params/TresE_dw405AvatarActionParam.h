#pragma once
#include "CoreMinimal.h"
#include "ETresE_dw405VigilanceMoveVec.h"
#include "TresE_dw405AvatarActionParam.generated.h"

class UAnimSequenceBase;
class USoundBase;

USTRUCT(BlueprintType)
struct FTresE_dw405AvatarActionParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float AppearDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearOffsetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* SoundData;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearDistance;
    
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
    TEnumAsByte<ETresE_dw405VigilanceMoveVec> VigilanceMoveVec;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableSettingDisappearTime: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float DisappearTime;
    
    TRESGAME_API FTresE_dw405AvatarActionParam();
};

