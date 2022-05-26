#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EX354_ArtemaRunShotSequenceInfo.h"
#include "TresAttack12_e_ex354_ArtemaRunShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack12_e_ex354_ArtemaRunShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxShotInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fShotWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxShotAdjustYawAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxShotAdjustPitchAngle;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bTurnAroundBattleArea;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX354_ArtemaRunShotSequenceInfo> m_ArtemaRunShotSequenceInfoArray;
    
    UTresAttack12_e_ex354_ArtemaRunShot();
};

