#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresStateAsset.h"
#include "TresStateSet.generated.h"

UCLASS(BlueprintType)
class TRESGAME_API UTresStateSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    TArray<FTresStateAsset> MyStates;
    
    UTresStateSet();
};

