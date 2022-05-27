#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex358_Base.h"
#include "TresAttack3_e_ex358_Utsusemi.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex358_Utsusemi : public UTresAttack_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 m_bExecuteThunderStep: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableMoveTime: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_TurnNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShakeWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ThunderStepToUtsusemiIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttackNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LastAttackIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallInitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimLocationAfterTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishAppearLocationOffsetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableThunderEffect: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_OverrideLastAttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_FinishVoiceDataList;
    
public:
    UTresAttack3_e_ex358_Utsusemi();
};

