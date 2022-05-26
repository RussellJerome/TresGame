#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresCoopAttack1_e_ex203_RotationPoison.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresCoopAttack1_e_ex203_RotationPoison : public UTresAttackDefinitionBase {
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
    float m_Acceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Deceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Radius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableCoopPawnAttack: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CoopPawnAttackIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresAttackDefinitionBase> m_CoopAttackDefinitionClass;
    
public:
    UTresCoopAttack1_e_ex203_RotationPoison();
};

