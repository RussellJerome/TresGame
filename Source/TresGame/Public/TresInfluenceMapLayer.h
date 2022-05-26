#pragma once
#include "CoreMinimal.h"
#include "TresInfluenceMapLayer.generated.h"

USTRUCT(BlueprintType)
struct FTresInfluenceMapLayer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    float Decay;
    
    UPROPERTY(EditAnywhere)
    float Flow;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool bUpdate;
    
    UPROPERTY(EditAnywhere)
    float UpdateInterval;
    
    TRESGAME_API FTresInfluenceMapLayer();
};

