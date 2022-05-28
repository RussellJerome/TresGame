#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex039.generated.h"

class UParticleSystem;

UCLASS()
class ATresEnemyPawn_e_ex039 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MzlParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumAttck;
    
public:
    ATresEnemyPawn_e_ex039();
};

