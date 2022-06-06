#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresEnemy_e_ex054_BattleStyle.h"
#include "TresAction8_e_ex054_ArmorBreak.generated.h"

UCLASS(HideDropdown)
class UTresAction8_e_ex054_ArmorBreak : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemy_e_ex054_BattleStyle> m_pro_BattleStyle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StunTime;
    
    UTresAction8_e_ex054_ArmorBreak();
};

