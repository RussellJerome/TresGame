#pragma once
#include "CoreMinimal.h"
#include "TresEnemyDarkSidePawnBase.h"
#include "TresEnemyPawn_e_dw407a.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS()
class ATresEnemyPawn_e_dw407a : public ATresEnemyDarkSidePawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DarkHomingChestEffData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_DarkHomingChestEff;
    
public:
    ATresEnemyPawn_e_dw407a();
};

