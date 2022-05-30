#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "EEX359_SplineMoveVelocityType.h"
#include "TresAttack9_e_ex359_FinalBrake_Start.generated.h"

UCLASS(HideDropdown)
class UTresAttack9_e_ex359_FinalBrake_Start : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_vWorldMoveLocation;
    
    UPROPERTY()
    bool m_bWorldMoveLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWarpDisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX359_SplineMoveVelocityType> m_VelocityType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocityExp;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vStartTangent;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vEndTangent;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxDisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLoopAnimTime;
    
    UPROPERTY()
    bool m_bLoopAnim;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fBonamikSpeedRate;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fBonamikResetTime;
    
    UTresAttack9_e_ex359_FinalBrake_Start();
};

