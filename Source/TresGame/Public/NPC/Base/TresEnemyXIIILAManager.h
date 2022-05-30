#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemyXIIILAManager.generated.h"

class ATresEnemyXIIILPawnBase;

UCLASS(HideDropdown)
class ATresEnemyXIIILAManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<ATresEnemyXIIILPawnBase*> m_EntryEnemyList;
    
    ATresEnemyXIIILAManager();
};

