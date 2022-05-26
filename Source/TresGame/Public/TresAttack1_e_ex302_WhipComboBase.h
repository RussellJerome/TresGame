#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIIE_Base.h"
#include "ETresEnemyEx302ComboKind.h"
#include "TresAttack1_e_ex302_WhipComboBase.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex302_WhipComboBase : public UTresAttack_XIIIE_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx302ComboKind m_ComboKind;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TractionMaxScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KeepDistance;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bBackStepAcction: 1;
    
    UTresAttack1_e_ex302_WhipComboBase();
};

