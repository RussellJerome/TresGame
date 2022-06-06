#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack2_e_ex006_Upper.generated.h"

class UParticleSystemComponent;
class UAnimSequenceBase;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack2_e_ex006_Upper : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_SandSmokeEffectComponent;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_RiseLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LandAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetForwardAimLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Deceleration;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_SandSmokeEffectOffset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SandSmokeEffectData;
    
public:
    UTresAttack2_e_ex006_Upper();
};

