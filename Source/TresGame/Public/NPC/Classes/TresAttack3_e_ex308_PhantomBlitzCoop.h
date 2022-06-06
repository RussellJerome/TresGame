#pragma once
#include "CoreMinimal.h"
#include "TresAttack3_e_ex308_PhantomBlitzBase.h"
#include "TresAttack3_e_ex308_PhantomBlitzCoop.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex308_PhantomBlitzCoop : public UTresAttack3_e_ex308_PhantomBlitzBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_FinishAttackStartTime;
    
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
    UTresAttack3_e_ex308_PhantomBlitzCoop();
};

