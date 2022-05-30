#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex361_DarkHand_ShockWaveAtkCol.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex361_DarkHand_ShockWaveAtkCol : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_FallDownTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallDownSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallDownDist;
    
    ATresProjectile_e_ex361_DarkHand_ShockWaveAtkCol();
};

