#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresCoopAction1_e_ex202_Absorption.generated.h"

class UAnimSequenceBase;
class UBlendSpaceBase;

UCLASS(HideDropdown)
class UTresCoopAction1_e_ex202_Absorption : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AppearAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UBlendSpaceBase* m_JumpStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_JumpLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JumpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CheckRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CheckAngle;
    
public:
    UTresCoopAction1_e_ex202_Absorption();
};

