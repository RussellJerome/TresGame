#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex816_Base.h"
#include "TresAttack3_e_ex816_Tackle.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex816_Tackle : public UTresAttack_e_ex816_Base {
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
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HitWallEndAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KnockbackOffsetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackDataIDName;
    
public:
    UTresAttack3_e_ex816_Tackle();
};

