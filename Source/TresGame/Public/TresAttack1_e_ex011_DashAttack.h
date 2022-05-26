#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex011_Base.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "ETresDashLimit_e_ex011.h"
#include "TresAttack1_e_ex011_DashAttack.generated.h"

class UAnimSequenceBase;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack1_e_ex011_DashAttack : public UTresAttack_e_ex011_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_ChildrenStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_ChildrenLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_ChildrenEndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MaxMoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ETresDashLimit_e_ex011::Type> m_DashLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_DashAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_WeakTurnAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_TurnAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnLimitAngle;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_TargetSelectEnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvQueryRunMode::Type> m_EnvQueryRunMode;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_RotationAdjustPower;
    
public:
    UTresAttack1_e_ex011_DashAttack();
};

