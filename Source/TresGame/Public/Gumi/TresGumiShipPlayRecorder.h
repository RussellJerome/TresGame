#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorCompoBase.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "TresGumiShipPlayRecorder.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPlayRecorder : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
    UTresGumiShipPlayRecorder();
protected:
    UFUNCTION()
    void _OnEnemyGroupWipeOutInBattleArea(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
    UFUNCTION()
    void _OnDefeated(const AActor* pTarget);
    
    UFUNCTION()
    void _OnAllEnemyGroupWipeOutInBattleArea();
    
};

