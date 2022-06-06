#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "ETresRandomDistributionType.h"
#include "ETresControlledRandomPeriod.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTComposite_BlackboardRandom.generated.h"

UCLASS()
class UTresBTComposite_BlackboardRandom : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bFailOnAll;
    
    UPROPERTY(VisibleDefaultsOnly)
    TEnumAsByte<ETresRandomDistributionType::Type> Distribution;
    
    UPROPERTY(VisibleDefaultsOnly)
    TEnumAsByte<ETresControlledRandomPeriod::Type> Randomness;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool bCustomPeriod;
    
    UPROPERTY(VisibleDefaultsOnly)
    float Period;
    
    UPROPERTY(EditAnywhere)
    TArray<FBlackboardKeySelector> Weights;
    
    UTresBTComposite_BlackboardRandom();
};

