#pragma once
#include "CoreMinimal.h"
#include "TresAttack3_e_ex309_RaijishiBase.h"
#include "TresAttack3_e_ex309_RaijishiCoop.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex309_RaijishiCoop : public UTresAttack3_e_ex309_RaijishiBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_ScratchDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishAttackStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableFirstOvertake: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableQuickOvertake: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_StartPrePlayVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableStartPrePlayVoice2D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_StartPostPlayVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableStartPostPlayVoice2D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_FinishPrePlayVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableFinishPrePlayVoice2D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_FinishPostPlayVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableFinishPostPlayVoice2D: 1;
    
public:
    UTresAttack3_e_ex309_RaijishiCoop();
};

