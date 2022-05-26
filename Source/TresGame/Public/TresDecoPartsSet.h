#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ETresDecoPartsAttachPartIdx.h"
#include "TresDecoPartsUnit.h"
#include "TresDecoPartsSet.generated.h"

UCLASS()
class TRESGAME_API UTresDecoPartsSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresDecoPartsAttachPartIdx> m_AttachPartIndex;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresDecoPartsUnit> m_AssetList;
    
    UTresDecoPartsSet();
};

