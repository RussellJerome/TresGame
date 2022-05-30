#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction5_e_ex307_Wait.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAction5_e_ex307_Wait : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_WaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WaitRandomRangeTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableVoice2D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_VoicePlayMaxNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VoicePlayIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VoicePlayIntervalRandomTime;
    
public:
    UTresAction5_e_ex307_Wait();
};

