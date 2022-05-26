#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex039_BombShot.generated.h"

class UAnimSequenceBase;
class UBlendSpaceBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex039_BombShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UBlendSpaceBase* m_AttackAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_FallLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitialSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PopupAngle;
    
public:
    UTresAttack3_e_ex039_BombShot();
};

