#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EX354_RunShotTimeInfo.h"
#include "TresAttack9_e_ex354_RunShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack9_e_ex354_RunShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bReverse;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetDistanceMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetDistanceAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX354_RunShotTimeInfo> m_ShotTimeArray;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fWallAvoidTurnVelocity;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fAvoidStartDistance;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fDotThreshold;
    
    UTresAttack9_e_ex354_RunShot();
};

