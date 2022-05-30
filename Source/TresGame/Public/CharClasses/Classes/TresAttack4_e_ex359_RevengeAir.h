#pragma once
#include "CoreMinimal.h"
#include "EEX359_SplineMoveVelocityType.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack4_e_ex359_RevengeAir.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack4_e_ex359_RevengeAir : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxMoveTime_Begin;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX359_SplineMoveVelocityType> m_VelocityType_Begin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocityExp_Begin;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FVector m_vStartTangent_Begin;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FVector m_vEndTangent_Begin;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_Move_Begin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX359_SplineMoveVelocityType> m_VelocityType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocityExp;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FVector m_vStartTangent;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FVector m_vEndTangent;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_Move;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWarpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fGoalToTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStartFromEnableChange;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableGravityOnTresTiming;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fBlendTime;
    
    UTresAttack4_e_ex359_RevengeAir();
};

