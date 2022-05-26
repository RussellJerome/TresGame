#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex054_VolcanoEruption.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex054_VolcanoEruption : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_FireNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_FireLoopNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireDistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireDistMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_GravityScale;
    
public:
    UTresAttack3_e_ex054_VolcanoEruption();
};

