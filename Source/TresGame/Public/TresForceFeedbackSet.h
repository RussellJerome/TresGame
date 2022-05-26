#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresForceFeedbackSet.generated.h"

class UForceFeedbackEffect;

UCLASS()
class TRESGAME_API UTresForceFeedbackSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UForceFeedbackEffect* m_AssetSmall;
    
    UPROPERTY(EditDefaultsOnly)
    UForceFeedbackEffect* m_AssetMiddle;
    
    UPROPERTY(EditDefaultsOnly)
    UForceFeedbackEffect* m_AssetLarge;
    
    UTresForceFeedbackSet();
};

