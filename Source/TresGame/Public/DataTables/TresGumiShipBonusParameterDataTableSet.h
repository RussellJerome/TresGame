#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGumiShipBonusParameterDataTableSet.generated.h"

class UDataTable;

UCLASS()
class UTresGumiShipBonusParameterDataTableSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pBonusParameterDataTable;
    
    UTresGumiShipBonusParameterDataTableSet();
};

