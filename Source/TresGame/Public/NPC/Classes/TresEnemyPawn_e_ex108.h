#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresEnemyPawn_e_ex108.generated.h"

class UParticleSystem;

UCLASS()
class ATresEnemyPawn_e_ex108 : public ATresCharPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WeaponDisappearParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HideInterpTime;
    
    ATresEnemyPawn_e_ex108();
};

