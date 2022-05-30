#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttractionFlowAssetInfo.generated.h"

class ATresAccompanyPawnBase;

USTRUCT(BlueprintType)
struct FTresAttractionFlowAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_AssetPtr;
    
    UPROPERTY(Transient)
    TSubclassOf<ATresAccompanyPawnBase> m_pAsset;
    
    TRESGAME_API FTresAttractionFlowAssetInfo();
};

