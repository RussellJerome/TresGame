#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresRemunerationData.h"
#include "TresRemunerationAsset.generated.h"

UCLASS(BlueprintType)
class TRESGAME_API UTresRemunerationAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FTresRemunerationData> DataArray;
    
    UTresRemunerationAsset();
};

