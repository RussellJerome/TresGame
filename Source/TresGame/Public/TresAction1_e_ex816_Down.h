#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex816_Down.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAction1_e_ex816_Down : public UTresActionDefinitionBase {
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
    float m_AttackHitImpluse;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackHitInitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bOverridePhysicsBlendRate: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverridePhysicsBlendRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverridePhysicsBlendInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverrideLoopPhysicsBlendRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverrideLoopBeforePhysicsBlendInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverrideLoopAfterPhysicsBlendInterpTime;
    
public:
    UTresAction1_e_ex816_Down();
};

