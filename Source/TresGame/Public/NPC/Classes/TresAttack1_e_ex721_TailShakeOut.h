#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex721_TailShakeOut.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex721_TailShakeOut : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_ScratchPinchedAnimData;
    
public:
    UPROPERTY(EditDefaultsOnly)
    float m_LimitUpPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitDownPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DrawOutBodyTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DownGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StopFallDownHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KeepDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KeepSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KeepAccelSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KeepDeccelSpeed;
    
    UTresAttack1_e_ex721_TailShakeOut();
};

