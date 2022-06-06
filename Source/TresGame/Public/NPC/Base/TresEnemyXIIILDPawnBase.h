#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILPawnBase.h"
#include "TresEnemyXIIILDPawnBase.generated.h"

class AActor;
class ATresPlayerPawnBase;

UCLASS(Abstract)
class ATresEnemyXIIILDPawnBase : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_fInvincibleTime;
    
    UPROPERTY()
    ATresPlayerPawnBase* m_Player;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> m_LastDamageCauser;
    
    UPROPERTY()
    AActor* m_BattleAIPoint;
    
public:
    ATresEnemyXIIILDPawnBase();
};

