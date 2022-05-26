#pragma once
#include "CoreMinimal.h"
#include "TresMapSetData.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresMapSetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Load;
    
    UPROPERTY(EditAnywhere)
    bool Visible;
    
    UPROPERTY(EditAnywhere)
    bool Ignore;
    
    FTresMapSetData();
};

