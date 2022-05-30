#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGimmickDropPrizeTable.h"
#include "TresGimmickDropPrizeSet.generated.h"

UCLASS()
class TRESGAME_API UTresGimmickDropPrizeSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FTresGimmickDropPrizeTable> m_PrizeDatas;
    
public:
    UTresGimmickDropPrizeSet();
};

