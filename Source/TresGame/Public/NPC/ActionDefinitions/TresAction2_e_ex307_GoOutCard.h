#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex307_GoOutCard.generated.h"

class USoundBase;
class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAction2_e_ex307_GoOutCard : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_GoOutCardVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableGoOutCardVoice2D: 1;
    
public:
    UTresAction2_e_ex307_GoOutCard();
};

