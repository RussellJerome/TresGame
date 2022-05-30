#pragma once
#include "CoreMinimal.h"
#include "TresAction2_e_dw405_PlayMotion.h"
#include "TresAction3_e_dw405_PlayVoice.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAction3_e_dw405_PlayVoice : public UTresAction2_e_dw405_PlayMotion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_SoundData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisappearRange;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_AppearSound;
    
public:
    UTresAction3_e_dw405_PlayVoice();
};

