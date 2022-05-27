#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack6_e_ex354_ChargeShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack6_e_ex354_ChargeShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_ProjName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinTargetAngleDiff;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTurnVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bTurnAwayFromWall;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxChargeTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FRotator> m_ShotRotArray;
    
    UTresAttack6_e_ex354_ChargeShot();
};

