#pragma once
#include "CoreMinimal.h"
#include "ETresDropItemID.h"
#include "TresGimmickDropPrizeDataUnit.generated.h"

USTRUCT(BlueprintType)
struct FTresGimmickDropPrizeDataUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresDropItemID m_Prize;
    
    UPROPERTY(EditAnywhere)
    int32 m_SpawnNum;
    
    UPROPERTY(EditAnywhere)
    int32 m_SpawnPlusNum;
    
    TRESGAME_API FTresGimmickDropPrizeDataUnit();
};

