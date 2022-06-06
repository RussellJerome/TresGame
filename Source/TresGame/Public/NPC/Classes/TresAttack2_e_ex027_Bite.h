#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex027_Bite.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex027_Bite : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BiteTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AddMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MaxMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StYawSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StPitchSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_LoopYawSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_LoopPitchSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PitchLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WarpWallDist;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_RestraintDamageAttackIDName;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_bWarpTurn;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_bOneLoopCancel;
    
    UTresAttack2_e_ex027_Bite();
};

