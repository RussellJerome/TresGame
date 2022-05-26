#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresAnimAssetUnit.h"
#include "TresAnimSet.generated.h"

UCLASS()
class TRESGAME_API UTresAnimSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresAnimAssetUnit> Anims;
    
    UTresAnimSet();
};

