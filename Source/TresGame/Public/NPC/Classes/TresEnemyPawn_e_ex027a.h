#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex027a.generated.h"

UCLASS()
class ATresEnemyPawn_e_ex027a : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_KnockUpPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KnockUpAdditionalGravity;
    
    ATresEnemyPawn_e_ex027a();
};

