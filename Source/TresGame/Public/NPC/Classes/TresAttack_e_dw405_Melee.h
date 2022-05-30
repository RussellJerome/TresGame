#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_dw405_Base.h"
#include "Base/TresAttack_e_dw405_Base.h"
#include "TresAttack_e_dw405_Melee.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack_e_dw405_Melee : public UTresAttack_e_dw405_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpeedAutoCorrectionRate;
    
public:
    UTresAttack_e_dw405_Melee();
};

