#pragma once
#include "CoreMinimal.h"
#include "TresComNpcPrizeInfo.generated.h"

class UTresGimmickDropPrizeSet;

USTRUCT(BlueprintType)
struct FTresComNpcPrizeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_Num;
    
    UPROPERTY(EditDefaultsOnly)
    UTresGimmickDropPrizeSet* m_pPrizeDataAsset;
    
    TRESGAME_API FTresComNpcPrizeInfo();
};

