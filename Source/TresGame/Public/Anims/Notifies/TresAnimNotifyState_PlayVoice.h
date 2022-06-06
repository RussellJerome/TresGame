#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresRandomVoice.h"
#include "TresAnimNotifyState_PlayVoice.generated.h"

class USoundBase;

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_PlayVoice : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* m_VoiceAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTresRandomVoice> m_RandomVoiceAssets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_VoiceGroupName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_StartWaitTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_VolumeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_PitchMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bFollow: 1;
    
public:
    UTresAnimNotifyState_PlayVoice();
};

