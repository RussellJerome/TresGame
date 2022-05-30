#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresEncountSpawnRequest.h"
#include "TresLevelEntityManager.generated.h"

class UTresLevelEntityGroup;
class ATresPawnBase;
class ATresLevelEntity;

UCLASS(Transient)
class TRESGAME_API UTresLevelEntityManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UTresLevelEntityGroup*> m_Groups;
    
    UPROPERTY()
    TArray<FTresEncountSpawnRequest> m_EncountSpawnRequests;
    
    UPROPERTY()
    TArray<ATresPawnBase*> m_RemoveActors;
    
    UPROPERTY()
    TArray<ATresLevelEntity*> m_PendingSpawn;
    
public:
    UTresLevelEntityManager();
};

