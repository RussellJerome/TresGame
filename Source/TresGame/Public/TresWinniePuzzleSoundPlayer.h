#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleSoundPlayer.generated.h"

class USQEXSEADMusic;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleSoundPlayer : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName BGMSlotName;
    
    UPROPERTY(EditDefaultsOnly)
    USQEXSEADMusic* BGMRef;
    
    UPROPERTY(EditDefaultsOnly)
    float SwitchBGMSectionGraceTime;
    
    UPROPERTY(EditDefaultsOnly)
    float BGMFadeOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool EnableOverwritePlayVoice;
    
    UPROPERTY(EditDefaultsOnly)
    FName VoiceAttachSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 RabbitHarvestedGoodJudgementUnitsNum;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayPlayerReplyVoiceWaitTimeWhenInvokeCharacterBonus;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayCharacterBonusGaugeMAXVoiceIntervalTime;
    
public:
    UTresWinniePuzzleSoundPlayer();
};

