#pragma once
#include "CoreMinimal.h"
#include "TresAttack3_e_ex309_RaijishiBase.h"
#include "TresAttack3_e_ex309_Raijishi.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex309_Raijishi : public UTresAttack3_e_ex309_RaijishiBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_LightCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumScratch;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ThunderEffectNumMove;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_StartPlayVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableStartPlayVoice2D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_FinishPlayVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableFinishPlayVoice2D: 1;
    
public:
    UTresAttack3_e_ex309_Raijishi();
};

