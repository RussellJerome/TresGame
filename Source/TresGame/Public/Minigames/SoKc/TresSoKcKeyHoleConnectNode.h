#pragma once
#include "CoreMinimal.h"
#include "TresSoKcKeyHoleConnectNode.generated.h"

class ATresSoKcKeyHoleGimmickActor;

USTRUCT(BlueprintType)
struct FTresSoKcKeyHoleConnectNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TWeakObjectPtr<ATresSoKcKeyHoleGimmickActor> ConnectableKeyHole;
    
    TRESGAME_API FTresSoKcKeyHoleConnectNode();
};

