#pragma once
#include "CoreMinimal.h"
#include "TresAttack3_e_ex308_PhantomBlitzBase.h"
#include "TresAttack3_e_ex308_PhantomBlitz.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex308_PhantomBlitz : public UTresAttack3_e_ex308_PhantomBlitzBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_StartPlayVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableStartPlayVoice2D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_FinishPlayVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableFinishPlayVoice2D: 1;
    
public:
    UTresAttack3_e_ex308_PhantomBlitz();
};

