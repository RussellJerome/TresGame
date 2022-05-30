#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIBPawnBase.h"
#include "TresEnemyXIIIBCoopPawnBase.generated.h"

UCLASS(Abstract)
class ATresEnemyXIIIBCoopPawnBase : public ATresEnemyXIIIBPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_BothVanishModeEndTime;
    
public:
    ATresEnemyXIIIBCoopPawnBase();
    UFUNCTION(Exec)
    bool IsEndVanishMarluxiaAndLarxene() const;
    
};

