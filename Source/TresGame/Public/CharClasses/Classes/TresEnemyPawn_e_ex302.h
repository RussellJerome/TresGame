#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIEPawnBase.h"
#include "TresEnemyEx302AfterImageEffect.h"
#include "TresAfterImageVisibleWorker.h"
#include "TresEnemyPawn_e_ex302.generated.h"

UCLASS()
class ATresEnemyPawn_e_ex302 : public ATresEnemyXIIIEPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyEx302AfterImageEffect m_AfterImageEffects[4];
    
private:
    UPROPERTY(EditDefaultsOnly)
    float m_AfterImageVisibleTime;
    
    UPROPERTY()
    TArray<FTresAfterImageVisibleWorker> m_AfterImageVisibleWorker;
    
public:
    ATresEnemyPawn_e_ex302();
    UFUNCTION()
    bool IsHitWhipComboAttack();
    
};

