#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex005_DrillAttack.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack1_e_ex005_DrillAttack : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SandCloudEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_LandDecalEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LandDecalLimitHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DecelMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitMinHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxMoveDistance;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_SandCloudEffectComponent;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_LandDecalEffectComponent;
    
public:
    UTresAttack1_e_ex005_DrillAttack();
};

