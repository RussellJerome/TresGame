#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex363_DarkRush.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack4_e_ex363_DarkRush : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FinishParticleData;
    
    UPROPERTY(EditAnywhere)
    float m_Dist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishUpdateTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishEndTime;
    
    UTresAttack4_e_ex363_DarkRush();
};

