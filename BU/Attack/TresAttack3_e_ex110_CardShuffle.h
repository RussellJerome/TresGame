#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex110_CardShuffle.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex110_CardShuffle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_CardHomingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardAttackTime2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardAttackTime3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardZHomingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardZHomingRate;
    
public:
    UTresAttack3_e_ex110_CardShuffle();
};

