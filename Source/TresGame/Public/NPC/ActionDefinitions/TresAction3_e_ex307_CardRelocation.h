#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex307_CardRelocation.generated.h"

class USoundBase;
class UAnimSequenceBase;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAction3_e_ex307_CardRelocation : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ThornParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardRotationAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardRotationMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_NotCorrectRelocationVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableNotCorrectRelocationVoice2D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_CorrectRelocationVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableCorrectRelocationVoice2D: 1;
    
public:
    UTresAction3_e_ex307_CardRelocation();
};

