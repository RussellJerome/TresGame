#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemyXIIIAManager.generated.h"

class ATresEnemyXIIIPawnBase;

UCLASS(HideDropdown)
class ATresEnemyXIIIAManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<ATresEnemyXIIIPawnBase*> m_EntryEnemyList;
    
    ATresEnemyXIIIAManager();
};

