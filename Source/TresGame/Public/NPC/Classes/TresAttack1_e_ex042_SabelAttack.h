#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack1_e_ex042_SabelAttack.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex042_SabelAttack : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_vTargetOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinPitch_ABS;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFallVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFallVelocityCurveExp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxForwardVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPullVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxReadyChainsLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinReadyChainsLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinGroundMargin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxAttackChainsLength2D;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxAttackCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackDistance;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_fDisplayCheckDebug;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCheckRearMarginRate;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_fCheckFrontPathOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCheckFrontPathRadius;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fLandCheckPenetrateLength;
    
    UTresAttack1_e_ex042_SabelAttack();
};

