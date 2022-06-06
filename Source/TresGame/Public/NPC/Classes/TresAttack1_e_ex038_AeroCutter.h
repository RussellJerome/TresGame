#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex038_AeroCutter.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex038_AeroCutter : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireSpeedSt;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireSpeedEnd;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireSpeedEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtDirTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Roll;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RollTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RotSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RotSpeedMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NotHomingDist;
    
public:
    UTresAttack1_e_ex038_AeroCutter();
};

