#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex203_ShellRotation.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack5_e_ex203_ShellRotation : public UTresAttackDefinitionBase {
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
    int32 m_NumLoop;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationMinRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationMaxRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationDeceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationSpeed;
    
public:
    UTresAttack5_e_ex203_ShellRotation();
};

