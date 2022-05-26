#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresPlayerAttackStateDataSet.generated.h"

class UDataTable;

UCLASS()
class UTresPlayerAttackStateDataSet : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pAttackStateParameter;
    
public:
    UTresPlayerAttackStateDataSet();
};

