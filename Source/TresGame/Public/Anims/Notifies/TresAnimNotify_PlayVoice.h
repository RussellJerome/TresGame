#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresRandomVoice.h"
#include "TresAnimNotify_PlayVoice.generated.h"

class USoundBase;

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_PlayVoice : public UAnimNotify {
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
    float m_VolumeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_PitchMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bFollow: 1;
    
public:
    UTresAnimNotify_PlayVoice();
};

