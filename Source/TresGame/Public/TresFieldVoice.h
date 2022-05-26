#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresFieldVoiceTextData.h"
#include "ETresChrUniqueID.h"
#include "TresFieldVoiceAnimData.h"
#include "TresFieldVoice.generated.h"

class USoundBase;

UCLASS()
class TRESGAME_API UTresFieldVoice : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_IsFaceAnim;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_pSound;
    
    UPROPERTY(EditAnywhere)
    float m_SoundDelay;
    
    UPROPERTY(EditAnywhere)
    float m_DispSubtitleTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresFieldVoiceTextData> m_TextDatas;
    
    UPROPERTY(EditAnywhere)
    ETresChrUniqueID m_Talker;
    
    UPROPERTY(EditAnywhere)
    FName m_TalkerName;
    
    UPROPERTY(EditAnywhere)
    FName m_EyeAnimName;
    
    UPROPERTY(EditAnywhere)
    FName m_LipAnimName;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresFieldVoiceAnimData> m_AnimDataArray;
    
    UTresFieldVoice();
};

