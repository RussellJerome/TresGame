#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "TresCardSpawnInfo_e_ex307.h"
#include "TresEnemyCardManager_e_ex307.generated.h"

class AActor;
class UParticleSystem;

UCLASS(Abstract)
class UTresEnemyCardManager_e_ex307 : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> m_CardClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Radius;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresCardSpawnInfo_e_ex307> m_CardSpawnInfoList;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CardSpawnParticleSystem;
    
public:
    UTresEnemyCardManager_e_ex307();
};

