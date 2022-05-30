#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_CompareHeight.generated.h"

UCLASS()
class UTresBTDecorator_CompareHeight : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Source;
    
    UPROPERTY(EditAnywhere)
    bool bUseSourceCenter;
    
    UPROPERTY(EditAnywhere)
    bool bUseSourceBounds;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Target;
    
    UPROPERTY(EditAnywhere)
    bool bUseTargetCenter;
    
    UPROPERTY(EditAnywhere)
    bool bUseTargetBounds;
    
    UPROPERTY(EditAnywhere)
    float LiteralRange;
    
    UTresBTDecorator_CompareHeight();
};

