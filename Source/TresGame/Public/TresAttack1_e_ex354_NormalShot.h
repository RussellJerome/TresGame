#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EEX354_NormalShotDistanceType.h"
#include "TresAttack1_e_ex354_NormalShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex354_NormalShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseTurnToTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAirReverseShotDistance;
    
    UPROPERTY(EditDefaultsOnly)
    EEX354_NormalShotDistanceType m_AirReverseShotDistanceType;
    
public:
    UTresAttack1_e_ex354_NormalShot();
};

