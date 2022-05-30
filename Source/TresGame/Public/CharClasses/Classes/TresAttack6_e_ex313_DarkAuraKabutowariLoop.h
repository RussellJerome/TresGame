#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack6_e_ex313_DarkAuraKabutowariLoop.generated.h"

UCLASS(HideDropdown)
class UTresAttack6_e_ex313_DarkAuraKabutowariLoop : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WarpOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FallSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WarpDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DecalStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DecalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FallMoveRate;
    
public:
    UTresAttack6_e_ex313_DarkAuraKabutowariLoop();
};

