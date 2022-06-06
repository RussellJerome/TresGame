#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGumiShipBattleDataTableSet.generated.h"

class UDataTable;

UCLASS()
class UTresGumiShipBattleDataTableSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pBaseParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pAttackMethodParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pEnemyUniqueParameterDataTable;
    
public:
    UTresGumiShipBattleDataTableSet();
};

