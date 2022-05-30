#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction5_e_dw405_PlayVoice.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAction5_e_dw405_PlayVoice : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_Sounds;
    
public:
    UTresAction5_e_dw405_PlayVoice();
};

