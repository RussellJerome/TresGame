#pragma once
#include "CoreMinimal.h"
#include "BX901_DarkCubeMineGroupSpawnInfo.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_bx901_BoostAttack.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_bx901_BoostAttack : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxAttackCount;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_BBKeyName_MaxAttackCount;
    
    UPROPERTY()
    bool m_bUseBBKey_MaxAttackCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBackAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBackMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBackBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackInitVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEndHomingDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackPastDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_BBKeyName_AttackPastDistance;
    
    UPROPERTY()
    bool m_bUseBBKey_AttackPastDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLastAttackPastDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_BBLastKeyName_AttackPastDistance;
    
    UPROPERTY()
    bool m_bUseBBKey_LastAttackPastDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTurnBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTurnMinVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bResetVelocityOnAttack;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fCloseStackCheckDistance;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fCloseStackCheckTime;
    
    UPROPERTY(EditDefaultsOnly)
    FBX901_DarkCubeMineGroupSpawnInfo m_DarkCubeMineGroupSpawnInfo;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DarkCubeMineSpawnFlag;
    
    UTresAttack4_e_bx901_BoostAttack();
};

