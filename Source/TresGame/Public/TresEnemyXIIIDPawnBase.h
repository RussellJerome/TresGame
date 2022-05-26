#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIPawnBase.h"
#include "TresEnemyXIIIDPawnBase.generated.h"

class AActor;
class ATresPlayerPawnBase;

UCLASS(Abstract)
class ATresEnemyXIIIDPawnBase : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_fInvincibleTime;
    
    UPROPERTY()
    ATresPlayerPawnBase* m_Player;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> m_LastDamageCauser;
    
public:
    ATresEnemyXIIIDPawnBase();
};

