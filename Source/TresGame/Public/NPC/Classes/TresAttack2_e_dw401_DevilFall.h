#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_dw401_DevilFall.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack2_e_dw401_DevilFall : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_HoleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_CloudEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CircleMove_MoveSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_FallCnt;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_tt_CircleMove_MoveSpeedXY;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_CloudEff;
    
public:
    UTresAttack2_e_dw401_DevilFall();
};

