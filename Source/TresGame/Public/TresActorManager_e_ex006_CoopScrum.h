#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresActorManager_e_ex006_CoopScrum.generated.h"

class ATresEnemy_e_ex006_CoopScrumVolume;

UCLASS()
class ATresActorManager_e_ex006_CoopScrum : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<ATresEnemy_e_ex006_CoopScrumVolume*> m_SpawnFilterVolume;
    
    ATresActorManager_e_ex006_CoopScrum();
    UFUNCTION(BlueprintPure)
    bool IsCoopMode() const;
    
    UFUNCTION(BlueprintCallable)
    void CoopDashEnd();
    
};

