#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_dw405_Base.h"
#include "Base/TresAttack_e_dw405_Base.h"
#include "TresAttack3_e_dw405_Avatar.generated.h"

class UAnimSequenceBase;
class USoundBase;
class UTresStateBase;

UCLASS(HideDropdown)
class UTresAttack3_e_dw405_Avatar : public UTresAttack_e_dw405_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LandAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AirAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_LandVoice;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_AirVoice;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_ActionDefClass;
    
public:
    UTresAttack3_e_dw405_Avatar();
};

