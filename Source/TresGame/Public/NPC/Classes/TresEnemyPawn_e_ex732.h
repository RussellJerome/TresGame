#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex732.generated.h"

UCLASS()
class ATresEnemyPawn_e_ex732 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchResetRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bForceStrongBodyDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSmallDamageTurnRate;
    
    ATresEnemyPawn_e_ex732();
    UFUNCTION(BlueprintPure)
    float GetUpperBodyBlendWeight() const;
    
};

