#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex039_SpinAttack.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex039_SpinAttack : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShakeWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OneShakeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopEndDistance;
    
public:
    UTresAttack4_e_ex039_SpinAttack();
};

