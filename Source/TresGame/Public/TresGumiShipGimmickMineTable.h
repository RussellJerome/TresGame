#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipGimmickMineTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickMineTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RespawnTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RespawnDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxHP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool Fragile;
    
    TRESGAME_API FTresGumiShipGimmickMineTable();
};

