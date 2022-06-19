#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "ETresRandomDistributionType.h"
#include "ETresControlledRandomPeriod.h"
#include "TresBTComposite_Random.generated.h"

UCLASS()
class UTresBTComposite_Random : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 bFailOnAll: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    TEnumAsByte<ETresRandomDistributionType::Type> Distribution;
    
    UPROPERTY(VisibleDefaultsOnly)
    TEnumAsByte<ETresControlledRandomPeriod::Type> Randomness;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint32 bCustomPeriod: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    float Period;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Weights;
    
    UTresBTComposite_Random();
};

