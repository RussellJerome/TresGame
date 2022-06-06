#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex049.generated.h"

UCLASS()
class ATresEnemyPawn_e_ex049 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_Score;
    
    UPROPERTY(Transient)
    bool m_bEnablePudding;
    
    UPROPERTY(Transient)
    bool m_bVisibilityPudding;
    
public:
    ATresEnemyPawn_e_ex049();
    UFUNCTION(BlueprintImplementableEvent)
    void KillEvent();
    
};

