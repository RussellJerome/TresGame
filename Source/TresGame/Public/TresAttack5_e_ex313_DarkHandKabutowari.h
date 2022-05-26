#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex313_DarkHandKabutowari.generated.h"

UCLASS(HideDropdown)
class UTresAttack5_e_ex313_DarkHandKabutowari : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_ThunderNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ThunderOmenTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ThunderInterval;
    
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
    UTresAttack5_e_ex313_DarkHandKabutowari();
};

