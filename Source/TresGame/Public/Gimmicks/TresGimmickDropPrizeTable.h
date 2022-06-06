#pragma once
#include "CoreMinimal.h"
#include "TresGimmickDropPrizeDataUnit.h"
#include "TresGimmickDropPrizeTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGimmickDropPrizeTable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTresGimmickDropPrizeDataUnit> m_Prizes;
    
    UPROPERTY(EditAnywhere)
    float m_SpawnRate;
    
    TRESGAME_API FTresGimmickDropPrizeTable();
};

