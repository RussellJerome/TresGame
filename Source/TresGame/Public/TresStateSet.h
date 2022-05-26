#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresStateAsset.h"
#include "TresStateSet.generated.h"

UCLASS()
class TRESGAME_API UTresStateSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresStateAsset> MyStates;
    
    UTresStateSet();
};

