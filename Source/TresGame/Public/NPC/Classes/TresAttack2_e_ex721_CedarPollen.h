#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex721_CedarPollen.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex721_CedarPollen : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_CedarPollenAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KeepDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KeepSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KeepAccelSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KeepDeccelSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimFrontTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HeadButtMaxSpeed;
    
public:
    UTresAttack2_e_ex721_CedarPollen();
};

