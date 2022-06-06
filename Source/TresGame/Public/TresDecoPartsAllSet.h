#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresDecoPartsAllSet.generated.h"

class UTresDecoPartsSet;

UCLASS()
class TRESGAME_API UTresDecoPartsAllSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresDecoPartsSet*> m_Assets;
    
    UTresDecoPartsAllSet();
};

