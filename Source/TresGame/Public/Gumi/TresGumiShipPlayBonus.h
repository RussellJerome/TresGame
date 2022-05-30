#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayRecorder.h"
#include "TresGumiShipBonusParameterDataTable.h"
#include "TresGumiShipPlayBonus.generated.h"

class UTresGumiShipBonusParameterDataTableSet;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPlayBonus : public UTresGumiShipPlayRecorder {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipDefeatedEnemy, const int32, dDefeatCount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipCompletedBonus, const FTresGumiShipBonusParameterDataTable&, rInfo);
    
private:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UTresGumiShipBonusParameterDataTableSet* m_pBonusDataTable;
    
public:
    UTresGumiShipPlayBonus();
};

