#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipRailShootingRouteSplineDataGetter.h"
#include "TresGumiShipRailShootingBattleSetData.generated.h"

class ATriggerBase;
class ATresGumiShipEnemyGenerator;

USTRUCT(BlueprintType)
struct FTresGumiShipRailShootingBattleSetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ATriggerBase* m_pEnemySpawnTrigger;
    
    UPROPERTY(EditAnywhere)
    TArray<ATresGumiShipEnemyGenerator*> m_EnemyGeneratorList;
    
    UPROPERTY(EditAnywhere)
    FTresGumiShipRailShootingRouteSplineDataGetter m_TriggerPointAttachData;
    
    TRESGAME_API FTresGumiShipRailShootingBattleSetData();
};

