#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionRanged.h"
#include "TresAttack3_n_ra203_PanThrow.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack3_n_ra203_PanThrow : public UTresNpcAttackDefinitionRanged {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PanEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PanWallEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStartSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetZ;
    
    UTresAttack3_n_ra203_PanThrow();
};

