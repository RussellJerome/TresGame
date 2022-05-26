#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex082_Upthrust.generated.h"

class UAnimSequenceBase;
class UParticleSystem;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack2_e_ex082_Upthrust : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_RepeatAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_RepeatAttackSignEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RepeatAttackStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EndAttackSignEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndAttackStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EnvQuery;
    
public:
    UTresAttack2_e_ex082_Upthrust();
};

