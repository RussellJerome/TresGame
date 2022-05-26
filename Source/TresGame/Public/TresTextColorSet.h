#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresTextColor.h"
#include "TresTextColorSet.generated.h"

UCLASS()
class UTresTextColorSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresTextColor> Colors;
    
    UTresTextColorSet();
};

